import sys

n1 = int(sys.stdin.readline())

card1 = set(map(int, input().split()))

n2 = int(sys.stdin.readline())

card2 = list(map(int, sys.stdin.readline().split()))

result = []
for x in card2:
    if x in card1:
        result.append('1')
    else:
        result.append('0')

print(' '.join(result))