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
    char str[100000];
    int i,j,t,flag,k,n;
    scanf("%d",&t);
    getchar();           
    for(k=0;k<t;k++)
    {
        gets(str);
        flag=0;
        for(i=0;str[i];i++)
        {
            for(n=1,j=0;str[j];j++)
            {
                if(i!=j&&str[i]==str[j])
                    n++;
                if(n>1)
                    break;
            }
            if(n==1)
            {
                printf("%c\n",str[i]);
                flag=1;
                break;
            }
        }
        if(!flag)
            printf("no\n");
    }
    return 0;
}