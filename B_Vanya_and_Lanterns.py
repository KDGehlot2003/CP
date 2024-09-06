n,l = map(int,input().split())
arr = list(map(int,input().split()))

m = -1

arr.sort()

for i in range(len(arr)-1):
    m = max(m,(arr[i+1]-arr[i])/2)
m = max(m,arr[0])
m = max(m,l-arr[-1])
print("{:.10f}".format(m))
