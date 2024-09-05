s = input()

plus = s.count('+')
arr = []

for i in s:
    if i!='+':
        arr.append(i)

arr.sort()

print("+".join(arr))