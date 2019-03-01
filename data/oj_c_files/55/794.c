#include <ctype.h>
#include <errno.h>
#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <locale.h>
#include <math.h>
#include <setjmp.h>
#include <signal.h>
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>


int main()
{
    long int a,b,i,j,n,digit,sum,remain[1000];
    char num[1000],c;
    scanf("%d %s %d",&a,num,&b);
    n=strlen(num);
    sum = 0;
    for (i=0;(c=num[i])!='\0';i++)
    {
        if (isupper(c)!=0)
           digit = (int)(c-'A'+10);
        if (islower(c)!=0)
           digit = (int)(c-'a'+10);  
        if (isdigit(c)!=0)
           digit = (int)(c-'0');
        sum += (int)(digit*pow(a,n-i-1));
           }    
    if (sum==0) printf("%d",sum);
    else
    {
    for (i=0;sum!=0;i++)
       {
            remain[i] = sum%b;
            sum = sum/b;
        }
    for (j=i-1;j>=0;j--)
    {
        if (remain[j]<=9) printf("%d",remain[j]);
        if (remain[j]>9)
        { 
           remain[j] = remain[j]- 10 + (int)'A';
           printf("%c",remain[j]);
           }
        }
    printf("\n");
}
getchar();
getchar();
}
