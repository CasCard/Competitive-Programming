# testCase=int(input("No of Test Case: "))
# rows = int(input("Enter number of rows in the matrix: "))
# columns = int(input("Enter number of columns in the matrix: "))
matrix = [['N', 'P', 'N', 'N', 'P'], ['N', 'N', 'P', 'N', 'N'], ['N', 'P', 'N', 'N', 'N'], ['P', 'N', 'N', 'N', 'N']]
matrix2 = [['N', 'P', 'P'], ['P', 'P', 'P'], ['P', 'P', 'N']]
stepCount=0
stepChar='P'
# print("Enter the %s x %s matrix: "% (rows, columns))
# for i in range(rows):
#     matrix.append(list(map(str, input().rstrip().split())))
indexMatrix=[]
indexMatrix2=[]
for i in range(3):
    for j in range(3):
        if(matrix2[i][j]=='N'):
            pass
        elif(matrix2[i][j]=='P'):
            stepCount+=1
            continue



print(stepCount)

# for i in range(4):
#     indexMatrix.append([i for i,e in enumerate(matrix[i]) if e=='P'])


# for i in range(3):
#     indexMatrix2.append([i for i,e in enumerate(matrix2[i]) if e=='P'])
#
# print(indexMatrix)
# print(indexMatrix2)