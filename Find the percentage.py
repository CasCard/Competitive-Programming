n = int(input())
from functools import reduce
student_marks = {}
for _ in range(n):
    line = input().split()
    name, scores = line[0], line[1:]
    scores = map(float, scores)
    student_marks[name] = scores
query_name = input()
scores=list(student_marks[query_name])
sum=reduce((lambda x,y:(x+y)),scores)
average=sum/len(scores)
print("{:.2f}".format(average))