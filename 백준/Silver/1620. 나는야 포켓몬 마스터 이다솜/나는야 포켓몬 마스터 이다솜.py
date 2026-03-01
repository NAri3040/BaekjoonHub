import sys

input = sys.stdin.readline

n, m = map(int, input().split())

id_to_name = [""] 
name_to_id = {}

for i in range(1, n + 1):
    name = input().rstrip()
    id_to_name.append(name)
    name_to_id[name] = i

for _ in range(m):
    query = input().rstrip()
    
    if query.isdigit():
        print(id_to_name[int(query)])
    else:
        print(name_to_id[query])
