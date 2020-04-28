A=[2,4,6,3,2]
B=[[5,1],[4,1],[4,0]]
result=[]
print(B[0])
for i in range(len(B)):
    idx=B[i][0]
    K=B[i][1]
    divisor=[]
    for j in range(1,idx):
        if j%idx==0:
            divisor.append(j)
    max=0
    for k in range(len(divisor)):
        if(A[k]>max):
            max=A[k]









