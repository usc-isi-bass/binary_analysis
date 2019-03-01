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
 	int a,b,c,d,e,f,i,h,s,r;
 	for(i=1;1;i++){
		scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
		if(a==0&&b==0&&c==0&&d==0&&f==0&&e==0){
			break;
			}
		else{
			h=(d+12-a)*3600;
			s=(60*b+c)-(60*e+f);
			r=h-s;
			printf("%d\n",r);
			}
		}
 	
    return 0;
}