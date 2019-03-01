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


int main(int argc, char* argv[])
{
	int a,b,c,i,s1=0,s2;
    int n[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	scanf("%d%d%d",&a,&b,&c);
    if(a%400==0 || (a%4==0 && a%100!=0))	
		n[1]=29;
	for(i=1;i<b;i++)	
		s1=s1+n[i-1];
	s2=s1+c;
	printf("%d\n",s2);
	return 0;
}