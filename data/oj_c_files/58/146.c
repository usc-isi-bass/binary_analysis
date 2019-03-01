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
	int n;
		int k;
			char a[81];
			scanf("%d",&n);
			getchar();
	for(int i=0;i<n;i++)
	{
        k=1;
		gets(a);
		if(a[0]<='9'&&a[0]>='0')
		{
			printf("%d\n",k-1);
			continue;
		}
		for(int j=0;a[j]!='\0';j++)
		{
			if((a[j]<='z'&&a[j]>='a')||(a[j]<='Z'&&a[j]>='A')||(a[j]=='_')||(a[j]<='9'&&a[j]>='0'))
			{}
			else
			{
				k--;
				printf("%d\n",k);
				break;
			}

		}
        if(k==1)
		printf("%d\n",k);
	}
	return 0;
}
