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
{int i,k,n;
 char *p,*s;
 p=(char *)malloc(1000*sizeof(char)); 
 gets(p);
 s=p;
 n=strlen(p);
 *(p+n)=' ';
 for(k=0,i=0;i<=n;i++)
 {if(*(s+i)==' '&&*(s+i-1)!=' '){
  if(i==n){printf("%d",k);k=0;}
  else{printf("%d,",k);k=0;}
 }
  if(*(s+i)!=' ') k++;
 }
}