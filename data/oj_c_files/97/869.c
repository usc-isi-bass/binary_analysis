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
	int n,m1=0,m2=0,m3=0,m4=0,m5=0,m6=0,m7=0,m8=0;
	scanf("%d",&n);
	m1=n/100;
	m7=n/10-m1*10;
	m8=n-m7*10-m1*100;
	m2=m7/5;
	m3=(m7-5*m2)/2;
	m4=(m7-5*m2-2*m3);
	m5=m8/5;
	m6=(m8-5*m5);
    printf("%d\n",m1);
    printf("%d\n",m2);
    printf("%d\n",m3);
    printf("%d\n",m4);   
    printf("%d\n",m5);    
    printf("%d\n",m6);                    

	return 0;
}
