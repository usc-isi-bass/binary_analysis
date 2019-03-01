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
	int n,i,t=0;
	char s[6000];
	gets(s);
	n=strlen(s)-1;//printf("%d\n",n);
	for(i=0;i<=n;i++)
	{
		if(s[i]!=' '&&i!=n)t++;
		else if(s[i]==' '&&t!=0){printf("%d",t);t=0;}
		if(i==n)printf("%d",t+1);
		if(i!=n&&t==0&&s[i-1]!=' ')printf(",");
	}

}