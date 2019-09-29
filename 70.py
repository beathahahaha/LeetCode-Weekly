def climbStairs(n: int):
    l2 = n // 2
    out = 0
    for i2 in range(l2 + 1):
        i1 = n - 2 * i2
        out = out + factorial(i1 + i2) / (factorial(i2) * factorial(i1))
    return int(out)


def factorial(x):
    if x == 0:
        return 1
    if x == 1:
        return x
    else:
        return x * factorial(x - 1)
