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
int n,x,y,d;
scanf("%d%d%d\n",&n,&x,&y);
d=0;
if ((x>2)&&(n%400==0)) 
d=1;
if ((x>2)&&(n%100!=0)&&(n%4==0))
 d=1;
d=d+y;
x--;
switch(x){
case 11:d=d+30;
case 10:d=d+31;
case 9:d=d+30;
case 8:d=d+31;
case 7:d=d+31;
case 6:d=d+30;
case 5:d=d+31;
case 4:d=d+30;
case 3:d=d+31;
case 2:d=d+28;
case 1:d=d+31;
}
printf("%d\n",d);
return 0;
}
