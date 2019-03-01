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
 int s=0,w,m[12]={31,28,31,30,31,30,31,31,30,31,30,31};
 scanf("%d",&w);
 int i,j;
 if(w==7)
	printf("1\n");
 for(i=1;i<12;i++)
 {
 for(j=0;j<i;j++)
 {
 s=s+m[j];}
 s=s+13;
 if((s+w-1)%7==5)
	{ printf("%d\n",i+1);}
 s=0;}
	return 0;
}