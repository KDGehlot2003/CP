n = int(input())
arr = list(map(int,input().split()))

arr.sort()



for i in range(n+1):
    if sum(arr[n-i:])>(sum(arr)-sum(arr[n-i:])):
        print(i)
        break

