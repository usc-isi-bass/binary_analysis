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
int i,j,len,x;
char s[50],w[50];
scanf("%s%s",s,w);
len=strlen(s);
for(i=0;i<50;i++)
{
	x=0;
	for(j=i;j<len+i;j++)
		{
			if(s[j-i]!=w[j]) x++;
	    }
	if(x==0) break;
}
printf("%d",i);
}