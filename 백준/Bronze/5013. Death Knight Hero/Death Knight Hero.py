import sys

n = int(sys.stdin.readline())
win_count = 0

for _ in range(n):
    battle_log = sys.stdin.readline().strip()
    
    if 'CD' not in battle_log:
        win_count += 1

print(win_count)