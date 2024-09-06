n = int(input())
ans = 0
arr = []

for i in range(n):
    s = input()
    arr.append(s)

for opera in arr:   
    if opera[1]=='+':
        ans+=1
    else:
        ans-=1

print(ans)