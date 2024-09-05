n = int(input())

arr = list(map(int,input().split()))

arr.append(arr[0])

mini = 999999

for i in range(1,len(arr)):
    m = arr[i] + arr[i-1]
    if mini>m:
        ans = [i,(i+1)%n]
    mini = min(m,mini)

print(*ans)