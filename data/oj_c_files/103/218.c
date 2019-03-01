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
char a[1000];
int count=1;
int j,k;
scanf("%s",a);
for(j=0;a[j]!='\0';j++)
{
    if(a[j]>='a'&&a[j]<='z')
    {
        a[j]=a[j]+'A'-'a';                        
    }                       
}
for(k=0;a[k]!='\0';k++)
{                                            
    if(a[k]==a[k+1])
    {
        count++;         
    }
    else
    {
        printf("(%c,%d)",a[k],count);
        count=1;
    }
}
return 0;
}