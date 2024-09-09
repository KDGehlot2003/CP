s = input()

ans = ''

i = 0

while i<len(s):
    if s[i]=='-':
        if s[i+1]=='-':
            ans+="2"
        else:
            ans+="1"
        i+=1
    else:
        ans+="0"
    i+=1
print(ans)
