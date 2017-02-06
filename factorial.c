#include <cstdio>
#include <math.h>
using namespace std;

int main()
{
    int n, d, c, i;
    scanf("%d", &n);
    
    while(n--) {
        scanf("%d", &d);
        c=0, i=1;
        while(d/pow(5, i) >= 1) {
            c += d/pow(5, i);
            i++;
        }
        
        printf("%d\n", c);
    }
    
    return 0;
}
