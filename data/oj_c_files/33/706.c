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

int main (){
int n,i;
char y[260],t[260]={0};
scanf ("%d",&n);
for (i=0;i<n;i++){
scanf ("%s",y);
char *py=y,*pt=t;
for (;*py!='\0';py++,pt++)
{
if (*py=='A') *pt='T';
if (*py=='T') *pt='A';
if (*py=='G') *pt='C';
if (*py=='C') *pt='G';

}
*pt='\0';
printf("%s\n",t);}
return 0;
}