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
	char c[31]={0};
	char *p=c;
	cin.getline(c,31);
	for(p=c;p<c+strlen(c);p++)
	{
		if(*p=='0')               //0???
			cout<<0<<endl;
		else if(*p>'0'&&*p<='9')  //??????
		{
			cout<<atoi(p)<<endl;
			while(*(p+1)>='0'&&*(p+1)<='9')
				p++;   //??????
		}
	}
	return 0;
}