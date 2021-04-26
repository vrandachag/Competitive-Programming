#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define MAX_LIMIT 100
int main() 
{
    char ch,s[30],sen[MAX_LIMIT];
    scanf("%c", &ch);
    scanf("%s",s);
    gets(sen);
    fgets(sen, MAX_LIMIT, stdin);    
    printf("%c", ch);
    printf("\n%s",s);
    printf("\n%s",sen);
    return 0;
}
