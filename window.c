#include <stdio.h>
#include <math.h>
#include <string.h>
int isPrime(int a)
{
    int c;

    for ( c = 2 ; c <= a - 1 ; c++ )
    {
        if ( a%c == 0 )
            return 0;
    }
    return 1;
}


int check(int s, int p,
           int prefix_sum[], int n)
{
    int satisfies = 1;


    for (int i = 0; i < n; i++) {
        if (i + s - 1 >= n)
            break;

        if (prefix_sum[i + s - 1] -
            (i - 1 >= 0 ?
             prefix_sum[i - 1] : 0) < p)
            satisfies = 0;
    }
    return satisfies;
}

int minimumWindowSize(int x, int y,
                      int p)
{

    int prefix_sum[y - x + 1];
    memset( prefix_sum, 0, (y - x + 1)*sizeof(int) );

    for (int i = x; i <= y; i++) {
        if (isPrime(i))
            prefix_sum[i - x] = 1;
    }


    for (int i = 1; i < y - x + 1; i++)
        prefix_sum[i] +=
                prefix_sum[i - 1];


    int low = 1, high = y - x + 1;
    int mid;
    while (high - low > 1) {
        mid = (low + high) / 2;


        if (check(mid, p,
                  prefix_sum, y - x + 1)) {


            high = mid;
        }
        
        else
            low = mid;
    }
    if (check(low, p,
              prefix_sum, y - x + 1))
        return low;
    return high;
}
int main(){
    int n,m,p,ans;
    scanf("%d",&m);
    scanf("%d",&n);
    scanf("%d",&p);
    ans=minimumWindowSize(m,n,p);
    printf("%d",ans);
    return 0;
}
