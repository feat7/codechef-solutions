#include <stdio.h>

int main()
{
    double x, y;
    scanf("%lf %lf", &x, &y);
    
    if(x+0.50<=y && ((int) x)%5==0) {
        printf("%.2lf", y-x-0.50);
    }
    else {
       printf("%.2lf", y); 
    }
    
    return 0;
}
