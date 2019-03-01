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
int n,i,s;
scanf("%d",&n);
s=0;
i=0;
while(i<=n){
if(i%7==0||i%10==7||i/10==7)
{s=s;}
else{
	s=s+i*i;}
i++;
}
printf("%d",s);
return 0;
}