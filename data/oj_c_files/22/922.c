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
 int m[300];
 int n1,n2,a,i,b;
 a=0;
 char n[300];
 for(i=0;i<=300;i++)
 {
 a=a+1;
 scanf("%d%c",&m[i],&n[i]);
 if(n[i]=='\n')
 break;
 }
 if(a==1) printf("No");
 else 
 {
  n1=0;
  n2=0;
  for(i=0;i<a;i++)
  {
   if(m[i]>n1) {b=n1;n1=m[i];m[i]=b;}
   if((m[i]>n2)&&(m[i]!=n1)) {n2=m[i];}
  } 
 if(n2==0) {printf("No");}
 else {printf("%d",n2);}
 }
 return 0;
}