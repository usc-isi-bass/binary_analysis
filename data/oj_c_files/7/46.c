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

int main ()
{
	char str[256],sub[256],re[256];
	scanf("%s%s%s",str,sub,re);
	int l1,l2;
	l1=strlen(str);
	l2=strlen(sub);
	int i,j,m;
	for(i=0;i<l1;i++)
	{
		m=1;
		for(j=0;j<l2;j++)
		{
			if(str[i+j]!=sub[j])
			{
				m=2;
			}
		}
		if(m==1)
		{
			for(j=0;j<l2;j++)
			{
				str[i+j]=re[j];
			}
			break;
		}
	}
	printf("%s\n",str);
	return 0;
}