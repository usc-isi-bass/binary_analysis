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
 int i,j,n;
 char a[200];
 gets(a);
 n=strlen(a);
 s:;
 for(i=0;i<n;i++){
   if(a[i]==' '&&a[i+1]==' '){
     for(j=i;j<=n;j++){
       a[j]=a[j+1];
     }
     n=n-1;
     goto s;
   }
 }
 puts(a);
 return 0;
}