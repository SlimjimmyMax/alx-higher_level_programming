#!/usr/bin/env python3
for i in range(25, -1, -1):
    print(chr(i + ord('a')).upper() if i % 2 == 0 else chr(i + ord('a')), end='')
print()

