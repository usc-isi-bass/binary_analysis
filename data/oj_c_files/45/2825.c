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
	char s[50],w[50];
	int n,i,j,m,a;
	scanf("%s",s);
	scanf("%s",w);
	n=strlen(w);
	m=strlen(s);
	j=0;
	i=0;
	while(j!=m)
	{
		j=0;
		while(w[i]!=s[j]&&i<n)
		{	
			i++;			
		}
	    while(w[i]==s[j]&&j<m&&i<n)
		{	
			i++;j++;			
		}
	}
	printf("%d",i-m);	
	return 0;
}