direction = input()
s = input()
top = 'qwertyuiop'
middle = 'asdfghjkl;'
bottom = 'zxcvbnm,./'

ans = ''

if direction=='R':
    for i in s:
        if i in top:
            ans += top[top.index(i)-1]
        elif i in middle:
            ans += middle[middle.index(i)-1]
        else:
            ans += bottom[bottom.index(i)-1]
else:
    for i in s:
        if i in top:
            ans += top[top.index(i)+1]
        elif i in middle:
            ans += middle[middle.index(i)+1]
        else:
            ans += bottom[bottom.index(i)+1]

print(ans)