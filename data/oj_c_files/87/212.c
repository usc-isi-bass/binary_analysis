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
	int i,a,b,c,d,e,f,s;
	for(i=0;;i++){
		scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
		if(a==0&&b==0&&c==0&&d==0&&e==0&&f==0)
			break;
		if(a!=0||b!=0||c!=0||d!=0||e!=0||f!=0){
			s=(d+12-a)*60*60+(e-b)*60+f-c;
			printf("%d\n",s);
		}
	}
	return 0;
}
