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
	int i,a[12],w,s;
	s=0;
	scanf("%d",&w);
	a[0]=a[12]=0;
	for(i=1;i<12;i++){
		if(i==2)
			a[i]=28;
		else if(i==4||i==6||i==9||i==11)
			a[i]=30;
		else
			a[i]=31;}
	for(i=0;i<12;i++){
		s=s+a[i];
		if((s+w)%7==0)
			printf("%d\n",i+1);}
	return 0;
}

