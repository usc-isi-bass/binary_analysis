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
	int a,b,c,x,y,z;
	for(a=1;a<=3;a++)
		for(b=1;b<=3;b++)
		{
			if(b==a) continue;
			c=6-a-b;
			x=(b>a)+(c==a);///////////////////?????????????????
	        y=(a>b)+(a>c);
            z=(c>b)+(b>a);
		    if( a+x==b+y&&b+y==c+z )
			{
				if(a>b&&b>c) cout<<"CBA"<<endl;
				if(a>c&&c>b) cout<<"BCA"<<endl;
				if(b>a&&a>c) cout<<"CAB"<<endl;
				if(b>c&&c>a) cout<<"ACB"<<endl;
				if(c>a&&a>b) cout<<"BAC"<<endl;
				if(c>b&&b>a) cout<<"ABC"<<endl;
			}
		}
			return 0;
}