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
{char m[100],b[100];
  int i,j=0,k=0,p,n; 	
  gets(m);
  n=strlen(m);
 while(1) 
 {
  for(p=0;m[k]!=' '&&m[k]!=0;k++,p++);
  for(i=k;p>0;j++,i--,p--)b[n-i]=m[j];
  if(n-k-1>=0)b[n-k-1]=' ';
  if(m[k]==0) break;
  j=(++k);
 }
b[n]='\0';
for(i=0;i<n;i++)printf("%c",b[i]);
}	
   