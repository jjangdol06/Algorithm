a, b, c = map(int, input().split())

# print(a+b+c, round(((a+b+c)/3), 2))
print(a+b+c, format(round(((a+b+c)/3), 2), ".2f"))

# import sys
#
# num_list = list(map(int,sys.stdin.readline().split()))
#
# print(sum(num_list), round(sum(num_list)/len(num_list),2))