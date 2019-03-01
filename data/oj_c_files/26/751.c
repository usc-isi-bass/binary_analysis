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
char shuzu[101]={0};
gets(shuzu);
int i=0,j=0;
for(i=0;i<101;)
{
	if(*(shuzu+i)==' '&&*(shuzu+i+1)==' ')
		{
		for(j=i;j<101;j++)
			*(shuzu+j)=*(shuzu+j+1);
		}
	else i++;
}
cout<<shuzu<<endl;
return 0;
}