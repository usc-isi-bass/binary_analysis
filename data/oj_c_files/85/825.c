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






void main()
{
	int i,j,n,k;
	char a[21];

	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",a);
		k = 0;
		
		if((a[0]=='_')||((a[0]>='a')&&(a[0]<='z'))||((a[0]>='A')&&(a[0]<='Z')))
		{
			k++;
				for(j=1;j<strlen(a);j++)
					if((a[j]=='_')||((a[j]>='a')&&(a[j]<='z'))||((a[j]>='A')&&(a[j]<='Z'))||((a[j]>='0')&&(a[j]<='9')))
					{
						k++;
					}
				  if(k == strlen(a))
					  printf("yes\n");
				  else
					  printf("no\n");
		}
		else
				printf("no\n");
	}
}




	