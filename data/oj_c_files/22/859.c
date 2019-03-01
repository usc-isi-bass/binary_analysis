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
{int a,b,ch,e,d,j;
e=(int)',';
a=0;d=0;
j=-1;
ch=e;
while(ch==e)
{

	scanf("%d",&b);d+=1;
	if(a<b){j=a;a=b;}
	else{if(j<b&&b<a){j=b;}}
		ch=getchar();}



if(d!=1&&j!=0){printf("%d",j);}else printf("No");


return 100;}