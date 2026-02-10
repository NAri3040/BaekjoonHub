import sys

n = int(sys.stdin.readline())
item = list(map(int, sys.stdin.readline().split()))

sort_item = sorted(set(item))

dic = {val: i for i, val in enumerate(sort_item)}

result = [dic[x] for x in item]

print(" ".join(map(str, result)))