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
	int a[20]={0},b[20]={0},x,y,i;
	int judge(int *p,int *q);
	scanf("%d%d",&x,&y);
	a[0]=x;
	b[0]=y;
for(i=1;x>1;i++,x=x/2)
a[i]=x/2;
a[i]=1;
for(i=1;y>1;i++,y=y/2)
b[i]=y/2;
b[i]=1;
printf("%d\n",judge(a,b));

return 0;
}
int judge(int *p,int *q)
{
for(;*p!=0;p++);
p--;
for(;*q!=0;q++);
q--;
for(;*p==*q;p--,q--);
q++;
return (*q);



}