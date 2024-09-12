n = int(input())
arr = list(map(int,input().split()))

new = arr[:]
new.sort()



ans = []
for i in range(n):
    if arr[i]!=new[i]:
        ans.append(i+1)


if (len(ans)==2):
    print('yes')
    print(*ans)
else:
    if new==arr:
        print('yes')
        print(1,1)
    elif new==arr[::-1]:
        print('yes')
        print(1,len(arr))
    else:
        print('no')
