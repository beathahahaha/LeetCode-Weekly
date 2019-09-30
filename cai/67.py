class Solution:
    def addBinary(self, a: str, b: str) -> str:
        def fuc1(a):
            if not a:
                return ['1']
            x = a.pop()
            if x == '1':
                a = fuc1(a)
                a.append('0')
                return a
            else:
                a.append('1')
                return a

        def fuc(a, b, plus):
            if (not a) or (not b):
                if (not a) and (not b):
                    if plus:
                        return ['1']
                    else:
                        return []
                else:
                    if plus:
                        if a:
                            a = fuc1(a)
                        if b:
                            b = fuc1(b)
                        return a + b
                    else:
                        return a + b
            x = a.pop()
            y = b.pop()
            if (x == '1') and (y == '1'):
                out = fuc(a, b, True)
                if plus:
                    out.append('1')
                else:
                    out.append('0')
            elif (x == '0') and (y == '0'):
                out = fuc(a, b, False)
                if plus:
                    out.append('1')
                else:
                    out.append('0')
            elif (x == '1') or (y == '1'):
                if plus:
                    out = fuc(a, b, True)
                    out.append('0')
                else:
                    out = fuc(a, b, False)
                    out.append('1')
            return out

        return ''.join(fuc(list(a), list(b), False))


print(Solution.addBinary(0, '11', '1'))
