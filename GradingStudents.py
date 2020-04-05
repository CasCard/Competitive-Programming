grades_count = int(input().strip())

grades = []
updatedGrade=[]

for _ in range(grades_count):
    grades_item = int(input().strip())
    grades.append(grades_item)


for i in range(grades_count):
    if((((5-grades[i]%5)+grades[i])-grades[i]) < 3 and grades[i] > 37):
        grades[i]=((5-grades[i]%5)+grades[i])




print(grades)
print(73%5) #3