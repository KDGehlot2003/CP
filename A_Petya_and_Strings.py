str1 = input()
str2 = input()


for i in range(len(str1)):
    if ord(str1[i].lower())>ord(str2[i].lower()):
        print(1)
        break
    elif ord(str1[i].lower())<ord(str2[i].lower()):
        print(-1)
        break
else: 
    print(0)
