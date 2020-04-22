mod=10**7
def main():
    N=int(input())
    ingredients_required=list(map(int, input().split()))[:N]
    ingredients_present=list(map(int, input().split()))
    if len(ingredients_present)==len(ingredients_required):
        min=ingredients_present[0]//ingredients_required[0]
        for i in range(1,len(ingredients_required)):
            value=ingredients_present[i]//ingredients_required[i]
            if(value < min):
                min=value
        print(min%mod)
    else:
        print(0)

 # Write code here

main()
