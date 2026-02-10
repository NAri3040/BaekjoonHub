import sys

n = int(sys.stdin.readline())

word = [0] * n 

for i in range(n):
    word[i] = sys.stdin.readline().replace("\n","")

set_word = list(set(word))
set_word.sort()
set_word.sort(key=len)


print("\n".join(set_word))