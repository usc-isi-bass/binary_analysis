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
	int i,j=0,k=0,n=0,m=0,max,min,a[100]={0};
	char str[1000]={0},*p,s[100][100]={0},(*ip)[100];
	gets(str);
	for(p=str;*p!='\0';p++)
	{
		if(*p==' ')
		{j=0;k++;}
		if(*p!=' ')
		{*(a+k)=*(a+k)+1;*(*(s+k)+j)=*p;j++;}
	}
	max=*a;min=*a;
	for(i=0;i<=k;i++)
		{
			if(max<*(a+i))
			{max=*(a+i);m=i;}
			if(min>*(a+i))
			{min=*(a+i);n=i;}
		}
		ip=s;
		printf("%s\n%s",*(ip+m),*(ip+n));
	
}