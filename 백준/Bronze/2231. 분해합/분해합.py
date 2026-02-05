import sys

n = int(input())
r = 0

for i in range(1, n):
    _sum = i + sum(map(int, str(i)))
    
    if _sum == n:
        r = i
        break

print(r)