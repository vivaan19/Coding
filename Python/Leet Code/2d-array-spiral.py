# Input: matrix = [[1,2,3],[4,5,6],[7,8,9]]
# Output: [1,2,3,6,9,8,7,4,5]
matrix = [[1,2,3],[4,5,6],[7,8,9]]
# print(len(matrix))
row=3
col=3
rini = 0
cini = len(matrix)-1
res = []
while True:
        for i in range(row):
            res.append(matrix[rini][i])
        for i in range(rini+1,row):
            res.append(matrix[i][cini])
        for i in range(cini-1, -1, -1):
            res.append(matrix[row-1][i])
        for i in range():
        break
print(res)
