class Solution:
    def myPow(self, x: float, n: int) -> float:
        if n<0:
            n=-n
            out=1
            while n:
                if not n%2:
                    n=n/2
                    x=x*x
                else:
                    n=n-1
                    out=out*x
            return 1/out
        else:
            out=1
            while n:
                if not n%2:
                    n=n/2
                    x=x*x
                else:
                    n=n-1
                    out=out*x
            return out            