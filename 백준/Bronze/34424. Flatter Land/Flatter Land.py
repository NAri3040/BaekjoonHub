import sys

try:
    line1 = sys.stdin.readline().strip()
    line2 = sys.stdin.readline().strip()
    
    if line1 and line2:
        n = int(line1)
        x = int(line2)
        print((n - 1) * x)
except EOFError:
    pass