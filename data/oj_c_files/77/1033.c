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
	char a[100];
	int x,i,j,p;
	scanf("%s",a);
	x=strlen(a);
	p=0;
	while(p<x/2)
	{
		i=0;
		while(a[i]!=a[x-1]) {i++;j=i;} 
		j--;
		while(a[j]!=a[0]) {j--;}
		printf("%d %d\n",j,i);
		a[i]=a[j]=0;
	    p++;
	}
}


	

