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
	void change(char x[1000],int l);
	char c[1000];
	int i=0,j,k=1;
	do
	{
		c[i]=getchar();
		i++;
	}while(c[i-1]>30);
	change(c,i);
	for(j=0;j<i-1;j++)
	{
		if(c[j]==c[j+1])
				k++;
		else 
		{
			printf("(%c,%d)",c[j],k);
			k=1;
		}
	}
	return 0;
}
void change(char x[1000],int l)
{
	int n;
	for(n=0;n<l;n++)
		if(x[n]<121&x[n]>96)x[n]=x[n]-32;
}