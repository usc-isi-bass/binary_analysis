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
	char a[300],b[300];
	int sa[128]={0},sb[128]={0};
	int i,j=0,k=1,n;
	scanf("%s %s",a,b);
	if(strlen(a)!=strlen(b))k=0;
	else
		for(i=0;i<strlen(a);i++)
		{
			j=(int)(a[i]);
			n=(int)(b[i]);
			sa[j]=sa[j]+1;
			sb[n]=sb[n]+1;
		}
		for(i=0;i<128;i++)
		{
			if(sa[i]!=sb[i])
			{
				k=0;
				break;
			}
		}
	if(k==0)printf("NO");
	else
		printf("YES");
}