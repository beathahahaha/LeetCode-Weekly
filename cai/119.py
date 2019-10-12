class Solution:
    def getRow(self, rowIndex: int) -> List[int]:
        out=[1]
        while rowIndex:
            out=[1]+[out[i]+out[i+1] for i in range(len(out)-1)]+[1]
            rowIndex=rowIndex-1
        return out