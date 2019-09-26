def plusOne(digits: list):
    x = 0
    power = 1
    while digits:
        x = x + digits.pop() * power
        power = power * 10
    out = [int(i) for i in (str(x+1))]
    return out