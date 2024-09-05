T = int(input())

for i in range(T):
    str1, str2 = input().split()
    ans1 = str2[0] + str1[1:]
    ans2 = str1[0] + str2[1:]
    print(" ".join([ans1, ans2]))
