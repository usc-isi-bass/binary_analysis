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
    char str[11],substr[4];
    int i,j,m,n;
   while(scanf("%s%s",str,substr)!=EOF)
    {
    
    m=strlen(str);
    j=0;
    n=str[0];
    for(i=1;i<m;i++)
    if(str[i]>n)
    {j=i;n=str[i];}
    for(i=0;i<=j;i++)
    printf("%c",str[i]);
    printf("%s",substr);
    for(i=j+1;i<m;i++)
    printf("%c",str[i]);
    printf("\n");
    }
   return 0;
   
}
