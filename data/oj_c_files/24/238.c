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

int main(){
	char a[50][50]={0};
int b[50],sb,lb,h=0,k=0;
int n,i=0;
while(1)
{
	scanf("%s",a[i]);
	b[i]=strlen(a[i]);
//	printf("%d ",b[i]);//
	if(getchar()=='\n')
	{
		break;
	}
	else
	{
		i++;
		n=i;
	}
}
sb=b[0];
lb=b[0];
for(i=0;i<=n;i++)
{
	if(lb<b[i])
	{
		lb=b[i];
		h=i;
	}
	if(sb>b[i])
	{
		sb=b[i];
		k=i;
	}
}
printf("%s",a[h]);
printf("\n%s",a[k]);
return 0;
}