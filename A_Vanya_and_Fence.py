n,height_fence = map(int,input().split())

friends = list(map(int,input().split()))

width = 0

for i in range(len(friends)):
    if friends[i]<=height_fence:
        width+=1
    else:
        width+=2
print(width)