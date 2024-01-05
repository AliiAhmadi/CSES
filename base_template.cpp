#include <bits/stdc++.h>

using namespace std;

const int BASE = 1e9;
const int BASE_DIGITS = 9;

long long fpw(long long x, long long y, long long yeki)
{
    long long result = 1LL;
    if (y == 0)
        return 1LL;
    x %= yeki;

    if (x == 0)
        return 0;

    while (y > 0)
    {
        if (y & 1)
            result = (result * x) % yeki;

        y >>= 1;
        x = (x * x) % yeki;
    }

    return result;
}

struct BigInt
{
    std::vector<int> digits;
    int sign;

    // methods
    int size()
    {
        if (this->digits.empty())
            return 0;
        int answer = (this->digits.size() - 1) * BASE_DIGITS;
        int ca = this->digits.back();
        while (ca)
        {
            answer++;
            ca /= 10;
        }
        return answer;
    }

    BigInt operator^(const BigInt &bigint)
    {
        BigInt answer = 1, a = *this, b = bigint;
        while (!b.isZero())
        {
            if (b % 2)
                answer *= a;
            a *= a;
            b /= 2;
        }
        return answer;
    }

    std::string to_string()
    {
        std::stringstream ss;
        ss << *this;
        std::string s;
        ss >> s;
        return s;
    }

    int sumof()
    {
        std::string s = this->to_string();
        int answer = 0;
        for (char ch : s)
            answer += ch - '0';
        return answer;
    }

    BigInt() : sign(1) {}
    BigInt(long long value)
    {
        *this = value;
    }

    BigInt(const string &str)
    {
        this->read(str);
    }

    void operator=(const BigInt &bg)
    {
        this->sign = bg.sign;
        this->digits = bg.digits;
    }

    void operator=(long long value)
    {
        this->sign = 1;
        digits.clear();
        if (value < 0)
            this->sign = -1, value = -value;

        for (; value > 0; value / BASE)
            this->digits.push_back(value % BASE);
    }

    BigInt operator+(const BigInt &bg) const
    {
        if (this->sign == bg.sign)
        {
            BigInt result = bg;

            for (int i = 0, carry = 0; i < (int)std::max(this->digits.size(), bg.digits.size()) || carry; i++)
            {
                if (i == (int)result.digits.size())
                    result.digits.push_back(0);
                result.digits[i] += carry + (i < (int)this->digits.size() ? this->digits[i] : 0);
                carry = result.digits[i] >= BASE;
                if (carry)
                    result.digits[i] -= BASE;
            }
            return result;
        }
        return *this - (-bg);
    }

    BigInt operator-(const BigInt &bg) const
    {
        if (this->sign == bg.sign)
        {
            if (this->abs() >= bg.abs())
            {
                BigInt result = *this;
                for (int i = 0, carry = 0; i < (int)bg.digits.size() || carry; i++)
                {
                    result.digits[i] -= carry + (i < (int)bg.digits.size() ? bg.digits[i] : 0);
                    carry = result.digits[i] < 0;
                    if (carry)
                        result.digits[i] += BASE;
                }

                result.trim();
                return result;
            }
            return -(bg - *this);
        }
        return *this + (-bg);
    }

    void operator*=(int value)
    {
        if (value < 0)
            this->sign = -this->sign, value = -value;

        for (int i = 0, carry = 0; i < (int)this->digits.size() || carry; i++)
        {
            if (i == (int)this->digits.size())
                this->digits.push_back(0);
            long long cur = this->digits[i] * (long long)value + carry;
            carry = (int)(cur / BASE);
            this->digits[i] = (int)(cur % BASE);
        }
        this->trim();
    }

    BigInt operator*(int value) const
    {
        BigInt result = *this;
        result *= value;
        return result;
    }

    BigInt operator*(long long value) const
    {
        BigInt result = *this;
        result *= value;
        return result;
    }

    void operator*=(long long value)
    {
        if (value < 0)
            this->sign = -this->sign, value = -value;
        if (value > BASE)
        {
            *this = *this * (value / BASE) * BASE + *this * (value % BASE);
            return;
        }

        for (int i = 0, carry = 0; i < (int)this->digits.size() || carry; i++)
        {
            if (i == (int)this->digits.size())
                this->digits.push_back(0);
            long long cur = this->digits[i] * (long long)value + carry;
            carry = (int)(cur / BASE);
            this->digits[i] = (int)(cur % BASE);
        }
        this->trim();
    }

    friend std::pair<BigInt, BigInt> divmod(const BigInt &a_, const BigInt &b_)
    {
        int norm = BASE / (b_.digits.back() + 1);
        BigInt a = a_.abs() * norm;
        BigInt b = b_.abs() * norm;
        BigInt q, r;

        q.digits.resize(a.digits.size());

        for (int i = a.digits.size() - 1; i >= 0; i--)
        {
            r *= BASE;
            r += a.digits[i];

            int s1 = r.digits.size() <= b.digits.size() ? 0 : r.digits[b.digits.size()];
            int s2 = r.digits.size() <= b.digits.size() - 1 ? 0 : r.digits[b.digits.size() - 1];
            int d = ((long long)BASE * s1 + s2) / b.digits.back();
            r -= b * d;
            while (r < 0)
            {
                r += b;
                d--;
            }
            q.digits[i] = d;
        }

        q.sign = a_.sign * b_.sign;
        r.sign = a_.sign;
        q.trim();
        r.trim();
        return std::make_pair(q, r / norm);
    }

    BigInt operator/(const BigInt &bg) const
    {
        return divmod(*this, bg).first;
    }

    BigInt operator/(int value) const
    {
        BigInt result = *this;
        result /= value;
        return result;
    }

    BigInt operator%(const BigInt &bg) const
    {
        return divmod(*this, bg).second;
    }

    int operator%(int value) const
    {
        if (value < 0)
            value = -value;
        int m = 0;
        for (int i = this->digits.size() - 1; i >= 0; i--)
            m = (this->digits[i] + (m * (long long)BASE)) % value;
        return m * this->sign;
    }

    void operator/=(int value)
    {
        if (value < 0)
            this->sign = -this->sign, value = -value;

        for (int i = (int)this->digits.size() - 1, rem = 0; i >= 0; i--)
        {
            long long cur = this->digits[i] + (rem * (long long)BASE);
            this->digits[i] = (int)(cur / value);
            rem = (int)(cur % value);
        }
        this->trim();
    }

    void operator+=(const BigInt &value)
    {
        *this = *this + value;
    }

    void operator-=(const BigInt &value)
    {
        *this = *this - value;
    }

    void operator*=(const BigInt &value)
    {
        *this = *this * value;
    }

    void operator/=(const BigInt &value)
    {
        *this = *this / value;
    }

    bool operator<(const BigInt &bg) const
    {
        if (this->sign != bg.sign)
            return this->sign < bg.sign;
        if (this->digits.size() != bg.digits.size())
            return (this->digits.size() * this->sign) < (bg.digits.size() * bg.sign);
        for (int i = this->digits.size() - 1; i >= 0; i--)
            if (this->digits[i] != bg.digits[i])
                return (this->digits[i] * this->sign) < (bg.digits[i] * bg.sign);
        return false;
    }

    bool operator>(const BigInt &bg) const
    {
        return bg < *this;
    }

    bool operator<=(const BigInt &bg) const
    {
        return !(bg < *this);
    }

    bool operator>=(const BigInt &bg) const
    {
        return !(*this < bg);
    }

    bool operator==(const BigInt &bg) const
    {
        return !(*this < bg) && !(bg < *this);
    }

    bool operator!=(const BigInt &bg) const
    {
        return !(*this == bg);
    }

    void trim()
    {
        while (!this->digits.empty() && !this->digits.back())
            this->digits.pop_back();
        if (this->digits.empty())
            this->sign = 1;
    }

    bool isZero() const
    {
        return this->digits.empty() || (this->digits.size() == 1 && !this->digits[0]);
    }

    BigInt operator-() const
    {
        BigInt result = *this;
        result.sign = -this->sign;
        return result;
    }

    BigInt abs() const
    {
        BigInt result = *this;
        result.sign *= result.sign;
        return result;
    }

    friend BigInt gcd(const BigInt &a, const BigInt &b)
    {
        return b.isZero() ? a : gcd(a, a % b);
    }

    friend BigInt lcm(const BigInt &a, const BigInt &b)
    {
        return a / gcd(a, b) * b;
    }
};

/*

Start your codes from below!!

*/

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    /*


     */

    return EXIT_SUCCESS;
}