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
	int swap(int a , int b);
	int a[100]={0},i=0,j=0,num,t;
	char c;
	for(num=0,i=0;c!='\n';)
	{scanf("%d", &a[i]);
		num++;i++;
		c=getchar();}
	if(num!=1)
	{for(i=0;i<num-1;i++)
		for(j=0;j<num-1-i;j++)
			if(a[j]<a[j+1]){t=a[j];a[j]=a[j+1];a[j+1]=t;}
				
			
		for(i=0;i<num;i++)
		{if(a[i]!=a[i+1]){printf("%d",a[i+1]);break;}
			else if(a[0]==a[num-1]) {printf("No");break;}}}
			else printf("No");
			return 0;}
	int swap(int a, int b)
	{int t;
		t=a;a=b;b=t;}