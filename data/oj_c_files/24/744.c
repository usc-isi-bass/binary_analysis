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
	char a[51][20];
	int b[51]={0};
	int n=0;
	char *p;
	while(scanf("%s",a[n])!=EOF)
		n++;
	int i;
	for(i=0;i<n;i++)
	{
		p=a[i];
		while(*p!='\0')
		{
			b[i]++;
			(p)++;
		}
	}
	int m=b[0],index=0;
	for(i=1;i<n;i++)
		if(b[i]>m)
		{
			m=b[i];
			index=i;
		}
	printf("%s\n\n",a[index]);
	m=b[0];index=0;
	for(i=1;i<n;i++)
		if(b[i]<m)
		{
			m=b[i];
			index=i;
		}
	printf("%s",a[index]);
	return 0;
}