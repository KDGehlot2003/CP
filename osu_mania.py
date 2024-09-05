T = int(input())

for _ in range(T):
    n = int(input())
    ans = []
    for i in range(n):
        temp = input()
        ans.append(temp)
    for i in range(len(ans)-1,-1,-1):
        print(ans[i].index('#')+1,end=" ")
    print()