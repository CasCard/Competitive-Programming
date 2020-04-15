t=int(input())
for _ in range(t):
    string=input()
    splitedList=list(string)
    strEven=""
    strOdd=""
    for i in range(len(list(string))):
        if(i%2==0):
            strEven=strEven+splitedList[i]
        else:
            strOdd=strOdd+splitedList[i]
    print(f"{strEven} {strOdd}")