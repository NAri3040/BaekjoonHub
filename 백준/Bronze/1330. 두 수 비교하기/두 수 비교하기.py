num = input().split()
num = list(map(int, num))

if num[0] < num[1]:
    print("<")
elif num[0] > num[1]:
    print(">")
else:
    print("==")