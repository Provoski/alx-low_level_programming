#!/bin/bash
gcc -c -pedantic -Wall -Wextra -Werror -std=gnu89 *.c | ./ar -rc liball.a *.o | ./ranlib liball.a
