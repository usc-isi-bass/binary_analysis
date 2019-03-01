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
	char zfc[257],a[50],b[50];
	int i,j,k;
	scanf("%s%s%s",zfc,a,b);
	for(i=0;i<strlen(zfc);i++)
	{
		if(a[0]==zfc[i])
		{
			for(j=1;j<strlen(a);j++)
			{
				if(a[j]!=zfc[i+j])
					break;
			}
			if(j==strlen(a))
				break;
		}
	}
	if(j==strlen(a))
	{
	   for(k=0;k<i;k++)
		   printf("%c",zfc[k]);
	   for(k=i;k<i+strlen(b);k++)
		   printf("%c",b[k-i]);
	   for(k=i+strlen(b);k<strlen(zfc);k++)
		   printf("%c",zfc[k]);
	   }
	else
		printf("%s",zfc);
	return 0;
}