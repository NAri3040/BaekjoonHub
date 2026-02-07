import sys

while (1):
    n = int(sys.stdin.readline())
    
    if n == -1:
        break
    
    d = []
    for i in range(1, n // 2 + 1):
        if n % i == 0:
            d.append(i)
    
    # 2. 약수 합 계산 및 판별
    if sum(d) == n:
        d_s = " + ".join(map(str, d))
        print(f"{n} = {d_s}")
    else:
        print(f"{n} is NOT perfect.")