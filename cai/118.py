class Solution:
    def generate(self, numRows: int) -> List[List[int]]:
        if not numRows:
            return []
        out=[[1]]
        while numRows>1:
            out=out+[[1]+[out[-1][i]+out[-1][i+1] for i in range(len(out[-1])-1)]+[1]]
            numRows=numRows-1
        return out