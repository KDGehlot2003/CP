w1,w2 = map(int,input().split())

c = 0

while w1<=w2:
    w1*=3
    w2*=2
    c+=1
print(c)