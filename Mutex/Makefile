TARGETS= mutex
CC_C= $(CROSS_TOLL)gcc
CFLAGS = -Wall -g -std=c99 -Werror -pthread
all: clean $(TARGETS)
$(TARGETS):
	$(CC_C) $(CFLAGS) $@.c -o $@     
clean:
	rm -f $(TARGETS)

