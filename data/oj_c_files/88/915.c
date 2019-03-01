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
char a[100],*p; 
gets(a);  //?????
p=a;
if(*p>=48&&*p<=57)
cout<<*p;
p++;
while(p-a<=strlen(a))
{
if(*p>=48&&*p<=57)  //???????????
	{
		cout<<*p;
	}
else if(*(p-1)>=48&&*(p-1)<=57)  //??????????
	{
		cout <<endl;
	}
	p++;
}
return 0;
}
