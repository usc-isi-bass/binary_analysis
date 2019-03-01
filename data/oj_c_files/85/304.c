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

int f(char a[21])
{
	int i,m,b=1,n=0;
	m=strlen(a);
	if((a[0]=='_')||(a[0]>='a'&&a[0]<='z')||(a[0]>='A'&&a[0]<='Z'))
	{
		n=1;
	 for(i=1;i<m;i++)
		 if((a[i]=='_')||(a[i]>='a'&&a[i]<='z')||(a[i]>='A'&&a[i]<='Z')||(a[i]>='0'&&a[i]<='9'))
			 n=n+1;
		 if(n==m)
			 b=0;

	}

	return(b);
}
		

	
void main()
{
	int n,i,b[100];
	char a[100][21];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	scanf("%s",a[i]);
	b[i]=f(a[i]);
	}
  for(i=0;i<n;i++)
		if(b[i]==0) printf("yes\n");
		else printf("no\n");
}