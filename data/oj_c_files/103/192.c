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
char a[1000];
	int e;
	int d[1000];
	for(int i=0;i<1000;i++)
	{
		scanf("%c",&a[i]);
		if(a[i]=='\n')
		{
			e=i;break;
		}
	}
	int k=0;
	for(int l=0;l<e;l++)
		d[l]=1;
	for(int j=1;j<e;j++)
	{
		if((a[j]==a[j-1]+'A'-'a')||(a[j]==a[j-1]-'A'+'a')||a[j]==a[j-1])
			d[k]++;
		else 
		{
			if(a[j-1]>='a')
				a[j-1]+='A'-'a';
			printf("(%c,%d)",a[j-1],d[k]);
			k++;
		}
	}
	if(a[e-1]>='a')
				a[e-1]+='A'-'a';
			printf("(%c,%d)",a[e-1],d[k]);
	return 0;
}