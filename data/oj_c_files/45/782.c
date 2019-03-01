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
	int i,m,j,b,k;
	char c1[50],c2[50];
	scanf("%s %s",c2,c1);
	for(i=0;c1[i]!='\0';i++)
	{
		k=i;
		for(j=0;c2[j]!='\0';j++)
		{
			if(c1[k]!=c2[j])
			{
				m=0;
				break;
			}
			k=k+1;
			m=1;
		}
		if(m==1)break;
	}
	b=k-j;
	printf("%d",b);
	return 0;
}