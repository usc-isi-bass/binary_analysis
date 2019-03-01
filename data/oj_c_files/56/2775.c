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

char a[6];
int i,j;
void replace(int i,int j)
{
	int temp;
	if(i<j)
	{
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
		replace(i+1,j-1);
	}
	else return;
}
void main()
{
	gets(a);
	replace(0,strlen(a)-1);
	puts(a);
}