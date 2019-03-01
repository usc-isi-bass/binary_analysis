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
	char a[30];
	int n,i;
	char de(char a[30]);
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	 scanf("%s",a);
	 int m;
	 m=strlen(a);
	 if(a[m-1]=='y'&&a[m-2]=='l')
	 {a[m-2]='\0';printf("%s\n",a);}
	 else if(a[m-1]=='g'&&a[m-2]=='n'&&a[m-3]=='i')
	 {a[m-3]='\0';printf("%s\n",a);}
	 else if (a[m-1]=='r'&&a[m-2]=='e')
	 {	a[m-2]='\0';printf("%s\n",a);}
	}
	
}