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
	char c[100];
	int n, i, j, f;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		f=0;
		scanf("%s",c);
		if(c[0]>='0'&&c[0]<='9')
			f=1;
		else
			for(j=0;c[j]!=0;j++)
			{
				if((c[j]<'a'&&c[j]>'Z'||c[j]>'z'||c[j]<'A'&&c[j]>'9'||c[j]<'0')&&c[j]!='_')
					f=1;
			}
		if(f)
			printf("no\n");
		else
			printf("yes\n");
		
	}
	return 0;
}