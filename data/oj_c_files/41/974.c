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


int main() {
	int a,b,c,d,e;
		for(a=1;a<6;a++)
			for(b=1;b<6;b++)
				for(c=1;c<6;c++)
					for(d=1;d<6;d++)
						for(e=1;e<6;e++){
							if((a!=b)&&(a!=c)&&(a!=d)&&(a!=e)&&(b!=c)&&(b!=d)&&(b!=e)
									&&(c!=d)&&(c!=e)&&(d!=e)&&(e!=2)&&(e!=3)){
								if(b==1&&c==2&&b==2&&a==5&&!(e==1)&&!(c!=1)&&!(d==1))
									cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e;
								if(b==1&&d==2&&b==2&&!(a==5)&&!(e==1)&&(c!=1)&&!(d==1))
									cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e;
								if(b==2&&c==1&&b==2&&a==5&&!(e==1)&&!(c!=1)&&!(d==1))
									cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e;
								if(b==2&&d==1&&b==2&&!(a==5)&&!(e==1)&&(c!=1)&&!(d==1))
									cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e;//??????????????
							}
						}
	return 0;
}