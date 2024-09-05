def helper(n):
    s = n%10
    n = n//10
    s += n
    print(s)

T = int(input())
for _ in range(T):
    n = int(input())
    helper(n)
