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
	char a[200],b[200],c[200];
	int n,i,max,min;
    scanf("%d",&n);
	scanf("%s",a);
		strcpy(b,a);
		strcpy(c,a);
	for(i=0;i<n-1;i++)
	{
	  scanf("%s",a);
	  if(strlen(a)>strlen(b))
		  strcpy(b,a);
	  if(strlen(a)<strlen(c))
		  strcpy(c,a);
	}
    printf("%s\n",b);
	printf("%s\n",c);
	return 0;
}