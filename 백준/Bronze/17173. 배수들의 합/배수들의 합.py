import sys


sum = 0

n, m = map(int, sys.stdin.readline().split())
nums = list(map(int, sys.stdin.readline().split()))

for i in range(1, n+1):
    for j in range(m):
        if(i % nums[j] == 0):
            sum += i
            break

print(sum)