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
	char a[100],b[100];
	int n,al,bl,i,j;
	scanf("%d",&n);
	for(j=0;j<n;j++)
	{
		scanf("%s",a);
		scanf("%s",b);
		al=strlen(a);
		bl=strlen(b);
		for(i=0;i<bl;i++)
		{
			if(a[al-1-i]<b[bl-1-i])
			{
				a[al-1-i]=a[al-1-i]+10-b[bl-1-i];
				a[al-2-i]=a[al-2-i]-1;
			}
			else a[al-1-i]=a[al-1-i]-b[bl-1-i];
		}
		for(i=0;i<al-bl;i++)
			printf("%c",a[i]);
		for(i=al-bl;i<al;i++)
			printf("%d",a[i]);
		printf("\n\n");
	}
}