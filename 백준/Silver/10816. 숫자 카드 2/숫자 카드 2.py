import sys
from collections import Counter

n = int(sys.stdin.readline())
cards = list(map(int, sys.stdin.readline().split()))
m = int(sys.stdin.readline())
queries = list(map(int, sys.stdin.readline().split()))

count = Counter(cards)

print(' '.join(str(count[x]) for x in queries))