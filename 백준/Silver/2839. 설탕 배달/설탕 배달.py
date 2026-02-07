n = int(input())
c_3 = 0

while n >= 0:
    if n % 5 == 0:
        print(n // 5 + c_3)
        break
    n -= 3
    c_3 += 1
else:
    print("-1")