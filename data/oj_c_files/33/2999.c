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
int n,i,j;
char c;
scanf("%d",&n);
c=getchar();
for(i=0;i<n;i++)
{
for(j=0;;j++)
{
c=getchar();
if(c=='A'){printf("T");continue;}
if(c=='C'){printf("G");continue;}
if(c=='T'){printf("A");continue;}
if(c=='G'){printf("C");continue;}
if(c=='\n'){printf("\n");break;}


}
}
}