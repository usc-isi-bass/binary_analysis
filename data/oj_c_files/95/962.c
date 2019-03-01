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
	char a[80],b[80],i;
	cin.getline(a,80);
	cin.getline(b,80);
	i=0;
	while(a[i]!='\0')
		{if((a[i]>=65)&&(a[i]<=90))
		a[i]=a[i]+32;
	i++;}
	i=0;
	while(b[i]!='\0')
		{if((b[i]>=65)&&(b[i]<=90))
		b[i]=b[i]+32;
	i++;}
	i=strcmp(a,b);
	if(i==0)
		cout<<'=';
	if(i>0)
		cout<<'>';
	if(i<0)
		cout<<'<';

    return 0;
}