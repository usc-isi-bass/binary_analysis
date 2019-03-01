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
    int n;
    scanf("%d",&n);
    for(int z=0;z<n;z++)
    {
            int m;
            scanf("%d",&m);
            if(m==1||m==2)
            {printf("1\n");break;}
            int a=1,b=1,d,c;
            for(int i=2;i<m;i++)
            {
                    c=a+b;
                    d=b;
                    b=c;
                    a=d;
            }
            printf("%d\n",b);
    }
}