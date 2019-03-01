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

int b[27];
int i,j,flag;
char t;
main()
{
	for(i=1;i<=26;i++) b[i]=0;
	while(1)
	{
		scanf("%c",&t);
		if (t=='\n') break;
		if ((t<='z')&&(t>='a')) b[t-'a'+1]++;
	}
	flag=0;
	for(i=1;i<=26;i++) if (b[i]!=0)
	{	
		printf("%c=%d\n",i+'a'-1,b[i]);
		flag=1;
	}
	if (flag==0) printf("No\n");
}
