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
	char a[100],b[100],c;
	int n1,n2,i,j;
	scanf("%s%s",a,b);
	n1=strlen(a);
	n2=strlen(b);
	if(n1!=n2) printf("NO");
	else{
	for(i=0;i<n1-1;i++)
	{
		if(b[i]!=a[i])
		{
		for(j=i+1;j<n1;j++)
		{
			if(b[j]==a[i])
			{c=b[i];b[i]=b[j];b[j]=c;break;}
		}
		}
	}
	if(b[n1-1]==a[n1-1]) printf("YES");
	else printf("NO");
	}
	return 0;
}