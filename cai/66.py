def plusOne(digits: list):
    if not digits:
        return [1]
    else:
        x = digits.pop()
        if x == 9:
            digits=plusOne(digits)
            digits.append(0)
        else:
            digits.append(x + 1)
        return digits
