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
	int a1=0,b1=0,c1=0;//?????????????????
	int a,b,c;//??????????????
	for(a=0;a<=2;a++)
		for(b=0;b<=2;b++)
			for(c=0;c<=2;c++)
			{
				a1=((a<b)+(a==c));//?????????????
				b1=((b<a)+(a>c));
				c1=((c>b)+(b>a));
				if(a>b&&b>c&&c1>b1&&b1>a1)cout<<"C"<<"B"<<"A"<<endl;//???????
				if(a>c&&c>b&&b1>c1&&c1>a1)cout<<"B"<<"C"<<"A"<<endl;
				if(b>a&&a>c&&c1>a1&&a1>b1)cout<<"C"<<"A"<<"B"<<endl;
				if(b>c&&c>a&&a1>c1&&c1>b1)cout<<"A"<<"C"<<"B"<<endl;
				if(c>a&&a>b&&b1>a1&&a1>c1)cout<<"B"<<"A"<<"C"<<endl;
				if(c>b&&b>a&&a1>b1&&b1>c1)cout<<"A"<<"B"<<"C"<<endl;
			}
	return 0;
}
