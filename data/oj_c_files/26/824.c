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
   char a[max+1],b[max+1];
   int i,j=0;
   gets(a);
   for(i=0;a[i]!='\0';i++){
       if(!(a[i]==' '&&a[i+1]==' ')){
       b[j++]=a[i];
    }
}
   b[j]='\0';
printf("%s",b);
return 0;
}
