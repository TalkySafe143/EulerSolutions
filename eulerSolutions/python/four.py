def checkPalindrome(s : str):
    d = s[::-1]
    return d == s

def four():
    ans = 0
    for i in range(100, 999):
        for j in range(100, 999):
            mul = i*j
            if checkPalindrome(str(mul)):
                ans = max(ans, mul)
    return ans
