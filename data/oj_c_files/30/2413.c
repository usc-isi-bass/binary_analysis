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
    int n,i,sum=0;
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        if(i%7!=0&&(i-7)%10!=0&&((i-70)>9||(i-70)<0==1)==1)
        sum+=i*i;
        }
        printf("%d",sum);
        return 0;
        }