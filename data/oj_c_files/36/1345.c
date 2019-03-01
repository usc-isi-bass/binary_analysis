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

main()
{
	char a[100]={0},b[100]={0};
	scanf("%s",a);scanf("%s",b);
	int m,n;
	m=strlen(a);n=strlen(b);
	if(m!=n) printf("NO");
	else
	{
		int i,j,k,l;
		for(i=0;i<m;i++)
		{
			for(j=0;j<m;j++)
			{
				if(b[j]==a[i]) break;
			}
			if(j==m) break;
			else b[j]='\0';
		}
		if(i<m) printf("NO");
		else printf("YES");
	}
	return 0;
}