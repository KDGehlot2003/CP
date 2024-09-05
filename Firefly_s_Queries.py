T = int(input())

for _ in range(T):
    n,q=map(int,input().split())
    arr = list(map(int,input().split()))
    quires = []
    m = 0
    for i in range(q):
        x,y = map(int,input().split())
        m = max(x,y,m)
        quires += [x]
        quires += [y]
    num = n%m
    ans = [*arr]
    for i in range(num):
        arr = arr[1:] + [arr[0]]
        ans += arr 
    # print(ans)
    # print(quires)
    for i in range(0,len(quires),2):
        print(sum(ans[quires[i]-1:quires[i+1]]))