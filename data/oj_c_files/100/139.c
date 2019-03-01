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
	char a[300],t;
	int  i,j,n,f=0,s;
	gets(a);
	n=strlen(a);
	for(t='a';t<='z';t++)
	{for(s=i=0;i<n;i++)
			if(a[i]==t)  {s=s+1;  f=1;}
			if(s!=0)  printf("%c=%d\n",t,s);}
			if(f==0)  printf("No\n");

}
