a, b = map(int, input().split())
c, d = bool(a), bool(b)

print((c and d) or ((not c) and (not d)))

# if c is d:
#     print("True")
# else:
#     print("False")