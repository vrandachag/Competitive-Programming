#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int a1,a2;
    float b1,b2;
    
    scanf("%d %d",&a1,&a2);
    scanf("%f %f",&b1,&b2);
    printf("%d %d",a1+a2,a1-a2);
    printf("\n%0.1f %0.1f",b1+b2,b1-b2);
    return 0;
}
