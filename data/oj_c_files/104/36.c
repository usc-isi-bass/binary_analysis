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
 int a,b,i=2,j=2,m[11]={0},n[11]={0};
 scanf("%d %d",&a,&b);
 m[1]=a;n[1]=b;
 m[0]=-1;n[0]=-2;
 while(a!=1) {m[i]=a/2;a=a/2;i++;}
 while(b!=1) {n[j]=b/2;b=b/2;j++;}
 i--;j--;
 while(m[i]==n[j]) {i--;j--;}
 printf("%d",m[i+1]);
}
 