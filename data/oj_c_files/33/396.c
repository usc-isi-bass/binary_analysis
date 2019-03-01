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
		char a[3000],b[30000];
		int i,x=0,y,n;
		scanf("%d",&n);
		for(y=0;y<=n;y++)
		{
			gets(a);
			
			for(i=0;a[i]!='\0';i++)
			{
				if(a[i]=='A')
				{
					b[i]='T';
				}
				if(a[i]=='T')
				{
					b[i]='A';
				}
				if(a[i]=='C')
				{
					b[i]='G';
				}
				if(a[i]=='G')
				{
					b[i]='C';
				}

			}
			b[i]='\0';
			puts(b);
		}
		return 0;
	}