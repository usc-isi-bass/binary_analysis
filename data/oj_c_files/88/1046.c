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
	char a[31];  
	char *p=a;                                                    //?????????a???
	cin.getline(a,31);
	for(;*p!='\0';p++)
	{
		if(*p>='0'&&*p<='9'&&*(p+1)>='0'&&*(p+1)<='9')               //????????????????????
		   cout<<*p;
		else if(*p>='0'&&*p<='9'&&(*(p+1)<'0'||*(p+1)>'9'))          //??????????????????????????
		   cout<<*p<<endl;  
		else                                                         //?????????????
		   continue;
	}
	return 0;
}
