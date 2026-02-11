import sys


item = set()
n = int(sys.stdin.readline())


for i in range(n):
    name, info = sys.stdin.readline().split()
    if (info == 'enter'):
        item.add(name)
    else:
        item.discard(name)

print("\n".join(sorted(item, reverse=True)))