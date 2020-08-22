import re

N = int(input())
nameLists = []
for N_itr in range(N):
    firstNameEmailID = input().split()
    firstName = firstNameEmailID[0]
    emailID = firstNameEmailID[1]
    nameList = re.findall("[a-z]", firstName)
    validemail = re.findall("[a-z]{1,40}@gmail.com", emailID)
    if len(validemail) != 0:
        nameLists.append(firstName)
nameLists.sort()
print(*nameLists,sep="\n")
