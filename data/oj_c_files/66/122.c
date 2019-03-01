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
unsigned int i,w,year,month,day,days=0; 
int mon[13]={0,31,28,31,30,31,30,31,31,30,31,30,31}; 
char *week[7]={"Sun.",  "Mon.", "Tue.", "Wed.","Thu.","Fri.","Sat."}; 

scanf("%ld%ld%ld",&year,&month,&day); 
if ((year%4==0)&&(year%100!=0)||(year%400==0)) 
mon[2]=29; 
for (i=0;i<month;i++) 
days=days+mon[i]; 
days=days+day; 
w=year-1+(int)((year-1)/4)-(int)((year-1)/100)+(int)((year-1)/400)+days; 

printf("%s",week[w%7]); 
return 0; 
} 

