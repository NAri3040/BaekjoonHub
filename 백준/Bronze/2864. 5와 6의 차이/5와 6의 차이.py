import sys

x, y = sys.stdin.readline().split()

min = int(x.replace('6', '5')) + int(y.replace('6', '5'))

max = int(x.replace('5', '6')) + int(y.replace('5', '6'))

print(min, max)