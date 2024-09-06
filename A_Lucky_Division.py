n = int(input())

def fun(n1):
    return str(n1).count('4') + str(n1).count('7')==len(str(n1))

if fun(n):
    print("YES")  
else:
    for i in range(1,n-1):
        if n/i==n//i and fun(n//i):
            print("YES")
            break
    else:
        print("NO")