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
int y, m, d; 
scanf("%d %d %d", &y,&m,&d); 
if(3 > m) 
{ 
m+= 12; 
y--; 
}
if((d+2*m+3*(m+1)/5+y+y/4-y/100+y/400)%7+1==1)
{printf("Mon.");
}
if((d+2*m+3*(m+1)/5+y+y/4-y/100+y/400)%7+1==2)
{printf("Tue.");
}
if((d+2*m+3*(m+1)/5+y+y/4-y/100+y/400)%7+1==3)
{printf("Wed.");
}
if((d+2*m+3*(m+1)/5+y+y/4-y/100+y/400)%7+1==4)
{printf("Thu.");
}
if((d+2*m+3*(m+1)/5+y+y/4-y/100+y/400)%7+1==5)
{printf("Fri.");
}
if((d+2*m+3*(m+1)/5+y+y/4-y/100+y/400)%7+1==6)
{printf("Sat.");
}
if((d+2*m+3*(m+1)/5+y+y/4-y/100+y/400)%7+1==7)
{printf("Sun.");
}
return 0;
}
