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
   int i,j,n,m;
   char c[100];
   scanf("%d",&n);
   for (i=0;i<n;i++){
       scanf("%s",c);
       m=strlen(c);
       if (((c[m-1]=='r')&&(c[m-2]=='e'))||((c[m-1]=='y')&&(c[m-2]=='l'))){
                m=m-2;
       }
       else {
	        m=m-3;
	   }
       for (j=0;j<m;j++){
	       printf("%c",c[j]);
	   }
       printf("\n");
   }
 return 0;
}