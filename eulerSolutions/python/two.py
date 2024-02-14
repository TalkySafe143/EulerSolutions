def two(n):
    sum = 2
    a = 1
    b=2
    while a <= n:
        temp = a+b
        if temp%2 == 0:
            sum += temp
        a = b
        b = temp
    return sum