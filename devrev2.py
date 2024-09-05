s = input()

res = []

for i in range(len(s)):
    for j in range(len(s)):
        res.append(s[i:j+1])
print(res[-1])