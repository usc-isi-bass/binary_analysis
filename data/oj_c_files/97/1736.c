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
	int r,a,b,c,d,e,f;
	cin>>r;
	for (a=9;a>=0;a--){
		for (b=1;b>=0;b--){
			for (c=2;c>=0;c--){
				for(d=1;d>=0;d--){
					for(e=1;e>=0;e--){
						for(f=4;f>=0;f--)
						{
							if(r==100*a+50*b+20*c+10*d+5*e+f)
							{
								cout<<a<<endl<<b<<endl<<c<<endl<<d<<endl<<e<<endl<<f<<endl;
								goto label;
							}
						}
					}
				}
			}
		}
	}
	label:
	return 0 ;
}

