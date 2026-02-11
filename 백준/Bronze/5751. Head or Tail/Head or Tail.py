import sys

input_data = sys.stdin.read().split()
ptr = 0

while ptr < len(input_data):
    n = int(input_data[ptr])
    ptr += 1
    
    if n == 0:
        break
    
    mary_wins = 0
    john_wins = 0
    
    for _ in range(n):
        result = input_data[ptr]
        if result == '0':
            mary_wins += 1
        else:
            john_wins += 1
        ptr += 1
    
    print(f"Mary won {mary_wins} times and John won {john_wins} times")