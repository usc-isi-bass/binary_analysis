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
    int i,j,n,m,a,num,total=0;
    scanf("%d",&n);
    char chi[1000];
    for(i=0;i<n;i++)
    {
		scanf("%d",&m);
        for(j=1;j<=m;j++)
        {
			scanf("%d",&a);
            total=a+3*j;
            if(total>60)
            break;
        }
        gets(chi);
        if(total<=62 && total>=60)
		{
			num=total-3*j;
            printf("%d\n",num);
        }
        else if(total<60)
		{
			num=60-3*m;
            printf("%d\n",num);
        }
        else
        {
			num=60-3*(j-1);
            printf("%d\n",num);
        }
    }
}