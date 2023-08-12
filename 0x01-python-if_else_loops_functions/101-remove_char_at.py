#!/usr/bin/python3
def remove_char_at(s, n):
    if s is None or n < 0:
        return s

    if n >= len(s):
        return s

    return s[:n] + s[n+1:]

# Test cases
s1 = "Best School"
s2 = "Chicago"
s3 = "C is fun!"
s4 = "School"
s5 = "Python"

print(remove_char_at(s1, 3))
print(remove_char_at(s2, 2))
print(remove_char_at(s3, 0))
print(remove_char_at(s4, 10))
print(remove_char_at(s5, -2))
