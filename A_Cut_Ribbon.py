n,a,b,c = map(int,input().split())

m = min(a,b,c)
if n%m==0:
    print(n//m)
else:
    m2 = max(a,b,c)-m
    if n%(m+m2)==0:
        print(n//(m+m2))
    