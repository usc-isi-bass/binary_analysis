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

main()
{
     char str[1001];
     int a=1,i;
     scanf("%s",str);
     for(i=0;i<strlen(str);i++)
     {
         if(str[i]<='z' && str[i]>='a') str[i]=str[i]-'a'+'A';                     
     }
     for(i=1;i<=strlen(str);i++)
     {
         if(str[i]==str[i-1]) a++;
         else {printf("(%c,%d)",str[i-1],a);a=1;}            
     }
}