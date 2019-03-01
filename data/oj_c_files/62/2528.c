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
   char a[100];
   gets(a);
   for(int i=0;a[i]!='\0';i++){
		   printf("%c",a[i]);
		   if(a[i]==' '){
	           for(int j=i+1;a[j]==' ';j++){
	                i++;	
			   }
		   }
   }
    return 0;
}


