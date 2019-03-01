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
	int y,i,k,p[5];
	scanf("%d",&y);
	i=0;
	do
	{
		p[i]=y%10;i++;y=y/10;
	}
	while(y/10<10&&y/10>=1);
	p[i]=y;
	for(k=0;k<=i;k++) 
		printf("%d",p[k]);

	return 0;
}