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

//********************
//*??:???
//*??;???
//*2012-10-26
//********************
int main()
{
	int a, b, c, i=0;
	char  f[4]="ABC";
	for(a=1;a<=3;a++)            //?????????
	{
		for(b=1;b<=3;b++)
		{
			if(b==a) continue;
			for(c=1;c<=3;c++)
			{
				if(c==a||c==b) continue;
				if(((b<a)+(c==a)==a-1)&&((a<b)+(a<c)==b-1)&&((c<b)+(b<a)==c-1))   //????????
				{
					if(a<b&&a<c) f[0]='A';//????????
					if(b<a&&b<c) f[0]='B';
					if(c<a&&c<b) f[0]='C';
					if(f[0]=='A'){
						if(b<c)	f[1]='B',f[2]='C';   //???????
                        else f[1]='C',f[2]='B';}
					if(f[0]=='B'){
						if(a<c) f[1]='A',f[2]='C';
						else f[1]='C', f[2]='A';}
                    if(f[0]=='C'){
						if(a<b) f[1]='A',f[2]='B';
						else f[1]='B', f[2]='A';}
				}
			}
		}
	}
	for(i=2;i>=0;i--)   //??????????
		cout << f[i];
	return 0;
}

