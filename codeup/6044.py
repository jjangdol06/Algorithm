import sys

a, b = map(int, sys.stdin.readline().split())


def num_sum(n1, n2):
    return n1 + n2

print(a + b)
print(a - b)
print(a * b)
print(a // b)
print(a % b)
print(round(a / b, 2))
