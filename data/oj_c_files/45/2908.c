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
	char a[505],b[505];
	scanf("%s %s",a,b);
	int len1=strlen(a);
	int len2=strlen(b);
	int i,j,k=0;
	for(i=0;i<len2;i++)
	{
		if(b[i]==a[0])
		{
			for(j=0;j<len1;j++)
			{
				if(a[j]==b[i+j])
                   k++;
			}
			if(k==len1)
			{
				printf("%d\n",i);
				break;
			}
		}
	}
}