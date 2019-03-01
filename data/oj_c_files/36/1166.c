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
	char a[100],b[100];
	int i,j,l1,l2,ia[128]={0},ib[128]={0};
	scanf("%s%s",a,b);
	l1=strlen(a);
	l2=strlen(b);
	if(l1!=l2)printf("NO");
	else
	{
		for(j=0;j<l1;j++)
		    for(i=1;i<=127;i++)
				if(a[j]==i)
				{
					ia[i]++;
					break;
				}
		for(j=0;j<l1;j++)
		    for(i=1;i<=127;i++)
				if(b[j]==i)
				{
					ib[i]++;
					break;
				}
		for(i=1;i<128;i++)
			if(ia[i]!=ib[i])break;
		if(i==128)printf("YES");
		else printf("NO");
	}
	return 0;
}