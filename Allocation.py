t=int(input())
def solve():
    ans=0
    N, B = map(int, input().split())
    housePrice=list(map(int,input().split()))[:N]
    housePrice.sort()
    for i in range(len(housePrice)):
        if(B>=housePrice[i]):
            B-=housePrice[i]
            ans+=1
    return ans
case=0
while (t>0):
    ans=solve()
    print("Case #{}: {}".format(case,ans))
    case+=1
    t-=1

            
            
        
               
        