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
	int i,k;
	char a[5],b[5];
	for(i=0;i<5;i++)
	{
		scanf("%c",&a[i]);
		if(a[i]=='\n')break;		
	}
	k=i;
	for(i=0;i<k;i++)
		b[i]=a[k-i-1];
	for(i=0;i<k;i++)
		printf("%c",b[i]);
}
