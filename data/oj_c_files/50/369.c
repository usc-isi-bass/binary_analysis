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
int monthday[12]={31,28,31,30,31,30,31,31,30,31,30,31},fw,i,j; 
scanf("%d", &fw); 
for (i=0;i<12;i++) 
{ 
for(j = 0;j < monthday[i]; j++) 
{ 
if (fw == 5 && j == 12) printf("%d\n", (i+1)); 
fw = (fw == 7) ? 1 : (fw+1); 
} 
} 
return 0; 
}