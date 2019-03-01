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
	char a[101]={0},*p=a,b[101],*q=b;
	char c; 
	for(p=a;c!='\n';p++)
	{
		c=cin.get();
		*p=c;
	}
	for(p=a;*(p+1)!='\n';p++,q++)
		*q=(char)((int)*p+(int)*(p+1));
	*q=(char)((int)*p+(int)*a);
	*(q+1)='\0';
	cout<<b;



	return 0;
}