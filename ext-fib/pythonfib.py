def pythonfib(n):
    if n == 0:
        return 0;
    elif n == 1:
        return 1
    a, b = 0, 1
    while n > 1:
        a, b = b, a + b
        n -= 1
    return b

