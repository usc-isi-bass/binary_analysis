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
	int n,count;
	char a[300];
	scanf("%d",&n);
	for (int i=1;i<=n;i++)
	{
		/*for (int j=0,count=0;j<300;j++)
		{
			scanf("%c",&a[j]);
			if(a[j]=='\n')
				break;
			count+=1;
		}*/
		scanf("%s", a);
		for (int m=0;m<strlen(a);m++)
		{
			if(a[m]=='A')
				printf("T");
			if(a[m]=='T')
				printf("A");
			if(a[m]=='C')
				printf("G");
			if(a[m]=='G')
				printf("C");
		}
		printf("\n");
	}
	return 0;
}