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
	int i,p,a;
	char c1[100],c2[100];
	for(i=1;i<100;i++) c1[i]=c2[i]=0;
	scanf("%s %s",c1,c2);
	i=0;
	p=0;
	while(c1[i]!=0)
	{
		i++;
	}
	a=i;
	i=0;
    while(c2[i]!=0)
	{
		i++;
	}
	if(a==i)
	{
		i=0;
	while(c1[i]!=0)
	{
		for(p=0;p<100;p++)
			if(c2[p]==c1[i]) c2[p]=c1[i]=0;
		i++;
	}
	p=0;
	for(i=0;i<100;i++) if(c1[i]!=0) p++;
	if(p==0) printf("YES");
    else printf("NO");
	}
	else printf("NO");
}