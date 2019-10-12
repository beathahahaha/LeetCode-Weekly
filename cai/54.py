class Solution:
    def spiralOrder(self, matrix: List[List[int]]) -> List[int]:
        if not matrix:
            return matrix
        if len(matrix)==1:
            return matrix[0]
        if len(matrix[0])==1:
            return [i[0] for i in matrix]
        return matrix.pop(0)+[matrix[i].pop() for i in range(len(matrix)-1)]+matrix.pop()[::-1]+[matrix[i].pop(0) for i in range(len(matrix)-1,-1,-1)]+self.spiralOrder([x for x in matrix if x])