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
	int i,num=0,a[50],max,min;
	char str[50][20],strmax[20],strmin[20],z;
	for(i=0;;i++)
	{
		scanf("%s",str[i]);
		a[i]=strlen(str[i]);
		num++;
		scanf("%c",&z);
		if(z=='\n') break;
	}
	max=a[0];
	min=a[0];
	strcpy(strmax,str[0]);
	strcpy(strmin,str[0]);	
	for(i=1;i<num;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
			strcpy(strmax,str[i]);
		}
		if(a[i]<min)
		{
			min=a[i];
			strcpy(strmin,str[i]);
		}
	}
	printf("%s\n%s",strmax,strmin);
}