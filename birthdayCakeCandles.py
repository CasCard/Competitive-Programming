ar_count=int(input())
ar=list(map(int,input().rstrip().split()))
largest=max(ar)
print(ar.count(largest))
