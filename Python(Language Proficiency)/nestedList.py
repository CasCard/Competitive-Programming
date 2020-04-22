studentList=[]
for _ in range(int(input())):
    name = input()
    score = float(input())
    studentList.append([name,score])
scoreList=list(set([score for (student,score) in studentList]))
scoreList.sort()
newList=[student for (student,score) in studentList if score==scoreList[1]]
newList.sort()
print(*newList,sep="\n")



# n = int(input())
# marksheet = [[input(), float(input())] for _ in range(n)]
# print(marksheet)
# second_highest = sorted(list(set([marks for name, marks in marksheet])))[1]
# print(sorted(list(set([marks for name, marks in marksheet]))))
# print('\n'.join([a for a,b in sorted(marksheet) if b == second_highest]))