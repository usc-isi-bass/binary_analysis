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
    int n, i, j, badall, all;
    int total[100]={60};
    scanf("%d", &n);
	j=0;
    for(i=0;i<n;i++)
    {
        scanf("%d", &badall);
		if(badall!=0)
		{
        for(j=0;j<badall;j++)
            scanf("%d", &total[j]);
        for(j=badall-1;j>=0;j--)
        {
            if(total[j]+j*3<=60)
            {
            all = 60 - (j+1)*3;
            if(all<total[j]){
            all=total[j];}
            break;
            }
        }
		}
		else all = 60;
        printf("%d\n", all);
    }
    return 0;
}
