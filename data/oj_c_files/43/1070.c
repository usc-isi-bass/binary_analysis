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
    int m,i,j,k,flag,a;
    scanf("%d",&m);
    if(m>=6&&m<=10000)
    {
        for(k=3;k<=m/2;k=k+2)
        {
            flag=1;
            for(i=2;i<k;i++)
            {
                if(k%i==0)
                {
                    flag=0;
                    break;
                }
            }
            if(flag==1)
            {
                a=m-k;
                for(j=2;j<a;j++)
                {
                    if(a%j==0)
                    {
                        flag=0;
                        break;
                    }
                }
                if(flag==1)
                    printf("%d %d\n",k,a);
            }
        }
    }
    return 0;
}