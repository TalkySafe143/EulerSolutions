def five(n):
    for i in range(10, 100000000000000000):
        ok = True
        for j in range(1, n):
            if i%j != 0:
                ok = False
                break
        if ok:
            return i