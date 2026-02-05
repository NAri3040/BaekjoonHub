import sys

a, b, c, d, e, f = map(int, sys.stdin.readline().split())

for i in range(-999, 1000, 1):
    for j in range(-999, 1000, 1):
        l = a * i + b * j 
        r = d * i + e * j 
        if (l == c and r == f):
            print(i, j)
            sys.exit(0)

