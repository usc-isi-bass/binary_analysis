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
	char a[50],b[50];
	int i,j,k,l,m,t;
	scanf("%s%s",a,b);
	t=0;
	for(i=0;a[i]!=0;i++)
	{
		k=0;l=0;
		for(j=0;a[j]!=0;j++)
		{
			if(a[j]==a[i])
				k++;
		}
		for(m=0;b[m]!=0;m++)
		{
			if(b[m]==a[i])
				l++;
		}
		if(k!=l)
		{
			t=1;
			break;
		}
	}
	if(t==0&&j==m)
		printf("YES");
	else
		printf("NO");
	return 0;
}