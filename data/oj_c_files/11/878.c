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
	int y,m,d,s,i,l;
	s=0;
	scanf("%d %d %d",&y,&m,&d);
	int a[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	for(i=1;i<m;i++){
		s=s+a[i];
	}
	s=s+d;
	if(y%4==0){
		if(y%100==0){
			if(y%400==0)
				l=1;
			else l=0;
		}
		else l=1;
	}
	else l=0;
	if(m>2) s=s+l;
    printf("%d\n",s);
    return 0;
}