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
	int a,b,c;//??
	int aw,bw,cw;//?????
	char a1,b1,c1;//??????
	for(a=1;a<=3;a++)
	{
		for(b=1;b<=3;b++)
		{
			for(c=1;c<=3;c++)//??
			{
				aw=(b>a)+(c==a);
				bw=(a>b)+(a>c);
				cw=(c>b)+(b>a);//?????
				if
					(!(a<=b&&aw<=bw||a<=c&&aw<=cw||
					b<=a&&bw<=aw||b<=c&&bw<=cw||
					c<=a&&cw<=aw||c<=b&&cw<=bw))//????????????????????
				{
					a1=a;
					b1=b;
					c1=c;//????
					//cout<<a<<b<<c<<endl;
				}
			}
		}
	}
	char r[4];
	r[a1]='A';
	r[b1]='B';
	r[c1]='C';
	for(int j=1;j<=3;j++)
	cout<<r[j];
	return 0;
}