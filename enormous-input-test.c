#include <cstdio>
using namespace std;

int main()
{
    int n, k, d, c=0;
    scanf("%d %d", &n, &k);
    
    for(int i=0; i<n; i++) {
        scanf("%d", &d);
        if(d%k==0) c++;
    }
    printf("%d", c);
    
    return 0;
}
