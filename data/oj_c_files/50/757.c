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
	int n,i,sum=12,a,b;
	scanf("%d",&n);
        for(i=1;i<=12;i++){
		if(i==1)
			sum+=0;
		if(i==2||i==4||i==6||i==8||i==9||i==11)
			sum+=31;
        else if(i==5||i==7||i==10||i==12)
			sum+=30;
        else sum+=28;
		a=sum%7;
		b=a+n;
		if(b>7)
			b=b-7;
		if(b==5)
        printf("%d\n",i);
	}
	return 0;
}
