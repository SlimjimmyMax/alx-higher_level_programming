#!/usr/bin/python3
for i in range(25, -1, -1):
    print("{:c}".format(i + ord('a') if i % 2 == 0 else i + ord('A')), end='')
