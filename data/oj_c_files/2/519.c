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

struct a{
	int n;
	char s[26];
}b[1000];

int main()
{
	int n,i,j,c[26]={0};
	char t;
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		int d,m;
		scanf("%d%s",&b[i].n,b[i].s);
		d=strlen(b[i].s);
		for(m=0;m<d;m++)
			c[b[i].s[m]-65]+=1;
	}
	for(i=0;i<26;i++)
		{
			for(j=i+1;j<26;j++)
				if(c[j]>c[i])
					break;
			if(j==26)
				break;
	}
	t=65+i;
	printf("%c\n%d\n",t,c[i]);
	for(i=0;i<n;i++)
	{
		if(strchr(b[i].s,t)!=NULL)
			printf("%d\n",b[i].n);
	}
	return 0;
}