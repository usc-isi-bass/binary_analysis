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
	int a,b,c,d,e;         //
	for(a=1;a<6;++a)
		for(b=1;b<6;++b){if(a==b)continue;
		   for(c=1;c<6;++c){if(a==c||b==c)continue;
		      for(d=1;d<6;++d){if(a==d||b==d||c==d)continue;
		         for(e=4;e<6;++e){if(a==e||b==e||c==e||d==e)continue;
		            if((e==1)==0&&(d!=1)&&(b==2)==1&&a!=1&&(a==5)+(c!=1)==1)
		            	cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<endl;
		         }
		      }
		   }
		}
	return 0;
}
