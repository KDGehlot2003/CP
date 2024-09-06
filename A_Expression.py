a = int(input())
b = int(input())
c = int(input())

m1  = a+b*c
m2 = a*(b+c)
m3 = a*b*c
m4 = (a+b)*c
m5 = a*b+c
m6 = a+b+c

print(max(m1,m2,m3,m4,m5,m6))