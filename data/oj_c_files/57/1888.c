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
	int n,len;
	char a[1000];
	scanf("%d",&n);

	for(int i=0;i<n;i++)
	{
		scanf("%s",a);
		len=strlen(a);
		if(a[len-1]=='r')
		{
			for(int j=0;j<len-2;j++)
				printf("%c",a[j]);
		}
		printf("\n");
		if(a[len-1]=='y')
		{
			for(int p=0;p<len-2;p++)
				printf("%c",a[p]);
		}
         printf("\n");
		if(a[len-1]=='g')
		{
			for(int q=0;q<len-3;q++)
				printf("%c",a[q]);
		}
        printf("\n");

	}



	return 0;
}