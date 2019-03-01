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
	int i,j,k,p,s[15];
	for(i=0;;i++)
	{
		k=0;
		scanf("%d",&s[0]);
		if(s[0]==-1)
			break;
		for(j=1;;j++)
		{
			scanf("%d",&s[j]);
			if(s[j]==0)
				break;
			for(p=0;p<j;p++)
				if(s[j]==2*s[p]||s[p]==2*s[j])
					k++;
		}			
		printf("%d\n",k);
	}
	return 0;
}