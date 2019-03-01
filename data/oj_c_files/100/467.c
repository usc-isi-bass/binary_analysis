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
    int p=0,j,n,count[26]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,};
    char i;
    char a[301];
    scanf("%s",a);
    //printf("%s",a);
    n=strlen(a);
    for(j=0;j<n;j++)
    {
        i=a[j];
        if(i<='z'&&i>='a')
        {
           count[i-97]++;
        }
    }
    for(i='a';i<='z';i++)
    {
        if(count[i-97]!=0)
        {
            printf("%c=%d\n",i,count[i-97]);
            p++;
        }
    }   
    if (p==0)
    printf("No");
    return 0;
}
