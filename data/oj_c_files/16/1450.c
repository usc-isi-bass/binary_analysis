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
	int k,i;                //????????????,????
	char a[6];              //?????????????   
	for(i=1;i<=5;i++)       //??????
	{
		a[i]=getchar();
		if(a[i]=='\n')
			break;
	}
	i=i-1;                 //????
	for(k=i;k>=1;k--)      //?????
		printf("%c",a[k]);
	return 0;
}