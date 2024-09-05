def main(s: str) -> str:
    countLower = 0
    countUpper = 0
    for i in s:
        if i.islower():
            countLower += 1
        else:
            countUpper += 1
    if countLower >= countUpper:
        return s.lower()
    else:
        return s.upper()

s = input()
print(main(s))
