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

void main()
{
	int i,j,t=0,m,n;
	char a[100],b[100];
	scanf("%s%s",a,b);
	m=strlen(a);n=strlen(b);
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
				if(a[i]==b[j])
				{b[j]=0;break;}
		}
		for(i=0;i<n;i++)
			if(b[i]!=0)
			{t=1;break;}
			if(t==0)
				printf("YES");
			else printf("NO");
}

