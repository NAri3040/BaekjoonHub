import sys

c = 0

n1, n2 = map(int, sys.stdin.readline().split())

set1 = list(sys.stdin.readline() for _ in range(n1))
set2 = list(sys.stdin.readline() for _ in range(n2))

for x in set2:
    if x in set1:
        c += 1


print(c)