import sys
n_x, n_y = map(int, sys.stdin.readline().split())

x = set([input().strip() for _ in range(n_x)])
y = set([input().strip() for _ in range(n_y)])

result = x & y
print(len(result))
print('\n'.join(map(str, sorted(result))))