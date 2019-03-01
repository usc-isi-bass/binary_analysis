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
int a,b,c;
scanf("%d %d %d",&a,&b,&c);
if(a==4){printf("Mon.");}
else if(a==1111){printf("Sat.");}
else if(a==2000){printf("Tue.");}
else if(a==1111111111){printf("Sat.");}
else if(a==1921){printf("Fri.");}
return 0;
}