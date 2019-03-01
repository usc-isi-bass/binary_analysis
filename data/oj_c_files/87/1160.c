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
int a,b,c,d,e,f,i;
int t=0,h=0,m=0,s=0,p=0;
for(i=0;;i++){
	scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
		if(a==0&&b==0){
			break;
		}
		else{
s=60-c+f;
m=e*60+(59-b)*60;
h=(11-a)*3600+d*3600;
t=s+m+h;
		
		
}
printf("%d\n",t);
}

return 0;
}

