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
	char zf[100],zf1[100],zf2[100];
	int i,j,k;
	gets(zf);
	gets(zf1);
	gets(zf2);
	k=strlen(zf1);
	for(i=0;zf[i]!=0;i++)
	{
		
		for(j=0;zf1[j]!=0;j++)
		{
			if(zf1[j]!=zf[i+j])
				break;
		}
		if(j==(k))
		{
			for(j=0;zf2[j]!=0;j++)
			{
				zf[i+j]=zf2[j];
			}
			break;
		}

	}
	printf("%s",zf);
	return 0;
}

