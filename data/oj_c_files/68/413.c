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

void main() 
{ 
int i,n,j,k,m,l=0,yinru; 
scanf("%d",&yinru);
for(i=6;i<=yinru;i+=2) 
{ 
for(n=2;n<i;n++) 
{ 
for(j=2,k=1;j<=(int)sqrt(n);j++)
{ 
if(n%j==0) k=0; 

} 
if(k) 
for(j=2,m=1;j<=(int)sqrt(i-n);j++)
{ 
if((i-n)%j==0) m=0; 

} 
if(m) 
{ 
printf("%d=%d+%d\n",i,n,i-n);

break; 
}
} 

} 

} 

