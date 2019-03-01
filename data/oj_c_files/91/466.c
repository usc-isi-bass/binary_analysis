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
	char z1[101]={'\0'},z2[101]={'\0'};
	gets(z1);
	int i,j,k;
	k=strlen(z1);
	for(i=0,j=0;i<k-1;i++,j++)
	{
		z2[j]=z1[i]+z1[i+1];
	}
	z2[k-1]=z1[k-1]+z1[0];
	printf("%s",z2);
	return 0;
}
