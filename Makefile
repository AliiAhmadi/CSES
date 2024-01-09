.DEFAULT_GOAL := run

.PHONY: run

run:
	@g++ base_template.cpp -o app && ./app