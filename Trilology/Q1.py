S1 = "subsequence" # this has 30 good subsequences
S2 = "sue"
m = len(S1)
n = len(S2)
c_i = ""
c_j = ""
count = [0 for i in range(n)]
for i in range(m):
    c_i = S1[i]
    for j in range(n-1, -1, -1):
        c_j = S2[j]
        if S1[i] == S2[j]:
            if j == 0:
                count[j] = count[j] + 1
            else:
                count[j] = count[j] + count[j-1]
print(count[n])
