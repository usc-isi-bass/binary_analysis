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
	char a[10000]={0},s[1000]={0},rmax[1000]={0},rmin[1000]={0};
	gets(a);
	int l,i,j=0,k=-1,max=0,min=10000;
	l=strlen(a);
	for(i=0;i<=l-1;i++)
	{
		if((a[i]!=' ')&&(a[i]!=','))
		{k++;s[k]=a[i];}
		else
		{
			if(k!=-1)
			{
				s[k+1]='\0';
			if((k+1)>max)
			{max=k+1;strcpy(rmax,s);}
			if((k+1)<min)
			{min=k+1;strcpy(rmin,s);}
			k=-1;
			}
		}
	}
		s[k+1]='\0';
			if((k+1)>max)
			{max=k+1;strcpy(rmax,s);}
			if((k+1)<min)
			{min=k+1;strcpy(rmin,s);}
	printf("%s\n%s",rmax,rmin);
	return 0;
}
