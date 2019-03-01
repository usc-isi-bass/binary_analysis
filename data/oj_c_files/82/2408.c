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
    int i,n,shrink,diastole,normal=0,max=0;
	scanf("%d",&n);
    for(i=0;i<n;i++)
	{
		scanf("%d %d",&shrink,&diastole);
        if(shrink>=90&&shrink<=140&&diastole>=60&&diastole<=90)
		{
			if(i==n-1)
			{
				normal++;
				if(normal>max)
				max=normal;
			}
			else
				normal++;
		}
		else
		{
			if(normal>max)
				max=normal;
			normal=0;
		}
	}
	printf("%d\n",max);
}