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
int n,j,k,i;
int ln[300];

scanf("%d",&n);
int T;
for(i=0;i<n;i++)
{
scanf("%d",&ln[i]);
}
printf("%d",ln[0]);
for(i=1;i<n;i++)
{T=1;
	for(k=i-1;k>0;k--)
	{
		if((ln[i]==ln[k])&&(T==1)) {T=-1;break;}
	}
	if((k==0)&&(T!=-1)&&(ln[i]!=ln[0]))	printf(",%d",ln[i]);
}

return 0;
}