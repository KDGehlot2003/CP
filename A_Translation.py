def main(t1,t2):
    if t1==t2[::-1]:
        return "YES"
    else:
        return "NO"



t1 = input()
t2 = input()

print(main(t1,t2))