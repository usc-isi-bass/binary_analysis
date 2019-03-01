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
	char a[51],b[51];
	int i,m=0;
	scanf("%s%s",a,b);
	for(i=0;;i++)
	{
		if(b[i]=='\0'||a[m]=='\0') break;
		if(a[m]!=b[i]) 
		{
			m=0;
			continue;
		}
		m++;
	}
	printf("%d",i-m);
	return 0;
}
	
