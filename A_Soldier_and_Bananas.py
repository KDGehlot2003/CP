k,n,w = map(int,input().split())
total = int(w/2*(2*k+((w-1)*k)))
if total-n>0:
    print(total-n)
else:
    print(0)