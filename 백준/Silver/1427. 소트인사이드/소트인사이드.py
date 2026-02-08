import sys

n = int(sys.stdin.readline())

str_n = list(str(n)) 

for i in range(len(str_n)-1):
    for j in range(len(str_n)-1):
        if (str_n[j] < str_n[j+1]):
            temp = str_n[j]
            str_n[j] = str_n[j+1]
            str_n[j+1] = temp

print(int("".join(str_n)))