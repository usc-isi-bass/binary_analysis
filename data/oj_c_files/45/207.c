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
int an=0,bn=0,j,i,t=0;
char a[50],b[50];
scanf("%s%s",a,b);
an=strlen(a);
bn=strlen(b);
for(i=0;i<bn;i++)
{
	if(b[i]==a[0])
	{
	for(j=i;j<(i+an);j++)
		if(b[j]!=a[j-i])break;
	    else if (j==i+an-1)
		{printf("%d",i);t=1;}
	 
	}
	if(t==1)break;
}


}