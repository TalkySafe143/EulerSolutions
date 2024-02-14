
def trialDivision(n):
    factorization = []
    while n%2 == 0:
        factorization.append(2)
        n //= 2
    d = 3
    while d*d <= n:
        while n%d == 0:
            factorization.append(d)
            n //= d
        d += 2
    if n>1:
        factorization.append(n)
    return factorization

def three(n):
    return trialDivision(n)[-1]