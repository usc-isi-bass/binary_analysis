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
	char a[35];
	char *p;
	cin.getline(a,35);
	for(p=a;p<(a+strlen(a));p++)
	{if((48<=*p)&&(*p<=57)) cout<<*p;  
	else  
	{if((48<=*(p+1))&&(*(p+1)<=57)) cout<<endl;  
	else continue;
	}}
	return 0;
}
