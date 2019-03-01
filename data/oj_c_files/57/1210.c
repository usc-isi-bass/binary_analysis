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
int n,i,j,x;
char zfc[256];
scanf("%d",&n);
for(i=0;i<n;i++)
{scanf("%s",&zfc);
x=strlen(zfc);
if((zfc[x-1]=='y')||(zfc[x-1]=='r'))
	{for(j=0;j<x-3;j++)
		{printf("%c",zfc[j]);}
	printf("%c\n",zfc[x-3]);}
else if(zfc[x-1]=='g')
	{for(j=0;j<x-4;j++)
		{printf("%c",zfc[j]);}
	printf("%c\n",zfc[x-4]);}
else{printf("%s\n",zfc);}
}
return 0;
}