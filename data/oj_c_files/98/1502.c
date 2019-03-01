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
	int i,n,mun;  //mun?????????
	int b[500]; //b??????????
	char word[500][50];
	char *pi;
	pi=word[0];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",word[i]);
		b[i]=strlen(word[i]);
	}
	printf("%s",pi);
	mun=b[0];
	for(i=1;i<n;i++)
	{
		pi=word[i];
		mun=mun+b[i]+1;
		if(mun<=80)
		{
			printf(" %s",pi);
		}
		else
		{
			printf("\n%s",pi);
			mun=b[i];
		}
	}
}