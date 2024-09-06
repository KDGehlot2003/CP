T = int(input())
for i in range(T):
    n = int(input())
    if n/4==n//4:
        print(n//4)
    else:
        print(n//4+n%4-1)