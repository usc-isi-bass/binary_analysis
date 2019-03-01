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
   char a[5];
   int i, j=0, b[5];
   scanf("%s",a);
   int n=strlen(a);
   for (i = n-1; i>=0; i--){
     b[j++] = a[i] - '0';
   }
   for(j=0;j<n;j++){
   printf("%d",b[j]);
   }
   return 0;
 }