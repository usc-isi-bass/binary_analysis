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
	char str[30];
         gets(str);
	char *p;
	p=str;
	int num=0;
	for(;*p!='\0';p++){
		if(*p>='0'&&*p<='9'){
			num=num*10+(*p-'0');
			p++;
			if(!(*p>='0'&&*p<='9')||*p=='\0'){
				cout<<num<<endl;
				num=0;
			}
			p--;
		}
	}
	return 0;
}
