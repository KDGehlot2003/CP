def calculate_typing_time(s):
    time = 2  
    for i in range(1, len(s)):
        if s[i] == s[i - 1]:
            time += 1
        else:
            time += 2
    return time

def maximize_typing_time(t, test_cases):
    results = []
    for s in test_cases:
        max_time = 0
        best_string = ""
        for i in range(len(s) + 1):
            for char in 'abcdefghijklmnopqrstuvwxyz':
                new_s = s[:i] + char + s[i:]
                current_time = calculate_typing_time(new_s)
                if current_time > max_time:
                    max_time = current_time
                    best_string = new_s
        results.append(best_string)
    return results


t = int(input())
test_cases = [input().strip() for _ in range(t)]


results = maximize_typing_time(t, test_cases)


for result in results:
    print(result)