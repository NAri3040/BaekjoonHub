import sys

n = int(sys.stdin.readline())
item = [0] * n

for i in range(n):
    item[i] = int(sys.stdin.readline())

sorted_item = sorted(item)

print('\n'.join(map(str, sorted_item)))