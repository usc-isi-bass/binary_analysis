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
	int n,l,i;char c[10];
	char str[256];
	scanf("%d",&n);gets(c);
	while(n--)
	{
		memset(str,0,sizeof(str));
		gets(str);
		l=strlen(str);
		for(i=0;i<l;i++)
		{
			switch(str[i])
			{
			case'A':printf("T");break;
			case'T':printf("A");break;
			case'C':printf("G");break;
			case'G':printf("C");break;
			}
		}
		printf("\n");
	}
}
