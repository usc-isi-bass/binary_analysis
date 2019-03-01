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
		int i,k=0,q=0,t=0,w=0;
		gets(a);
		w=strlen(a);
		for(i=0;a[i]!='\0';i++)
		{
			b[i]=a[i]+a[i+1];
		}
		b[w-1]=a[0]+a[w-1];
		b[w]='\0';
		puts(b);
		return 0;
	}
 