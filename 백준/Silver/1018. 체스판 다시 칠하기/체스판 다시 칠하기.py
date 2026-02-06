import sys

N, M = map(int, sys.stdin.readline().split())
board = [sys.stdin.readline().strip() for _ in range(N)]

results = []


for i in range(N - 7):
    for j in range(M - 7):
        draw1 = 0
        draw2 = 0

        for a in range(i, i + 8):
            for b in range(j, j + 8):
                if (a + b) % 2 == 0:
                    if board[a][b] != 'W': draw1 += 1
                    if board[a][b] != 'B': draw2 += 1
                else:
                    if board[a][b] != 'B': draw1 += 1
                    if board[a][b] != 'W': draw2 += 1
        
        results.append(draw1)
        results.append(draw2)
        
print(min(results))

'''
[
    ['WBWBWBWB'],
    ['BWBWBWBW'],
    ['WBWBWBWB'], 
    ['BWBBBWBW'], 
    ['WBWBWBWB'], 
    ['BWBWBWBW'], 
    ['WBWBWBWB'], 
    ['BWBWBWBW']
]
[0][0][0]
'''