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
	int n,i;
	char a[88][88],c[88][88]={{'a'}};
	int b[88];
	scanf("%d\n",&n);
	for(i=0;i<n;i++)
	{gets(a[i]);
	b[i]=strlen(a[i]);
	if(a[i][b[i]-1]=='r')
		strncpy(c[i],a[i],b[i]-2);
	if(a[i][b[i]-1]=='g')
		strncpy(c[i],a[i],b[i]-3);
	if(a[i][b[i]-1]=='y')
		strncpy(c[i],a[i],b[i]-2);
	}
for(i=0;i<n;i++)
printf("%s\n",c[i]);

}


