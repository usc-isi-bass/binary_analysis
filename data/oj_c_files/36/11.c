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
	char a[100],b[100],*p=a;
	int i,f=0,t=0;
	scanf("%s",&a);
	scanf("%s",&b);
	if(strlen(a)!=strlen(b))
	{t=1;
	 printf("NO\n");
	}
	for(;*p=='\0';p++)
	{for(i=0;i<strlen(b);i++)
		if(*p==b[i])
		{f=1;
		 b[i]=0;
		 break;
		}
	 if(f==0)
	 {printf("NO\n");
	  t=1;
	  break;
	 }
	 else
		 f=0;
	}
	if(t==0)
		printf("YES\n");
}