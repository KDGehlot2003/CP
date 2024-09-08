n = int(input())

database = []

d = {}

for i in range(n):
    s = input()
    if s not in d:
        d[s] = 1
    else:
        d[s]+=1
    database.append(s)
    if d[s]==1:
        print('OK')
    else:
        print(s+str(d[s]-1))
