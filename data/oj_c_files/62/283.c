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

int main(){
       char s[205];
       char a[205];
       int i,m;
       gets(s);
       int len;
       i=0;
       len = strlen(s);
         for(int j = 0; j < len; j++) 
        {
           if (s[j]!=' ')
             a[i]=s[j];
           else if((s[j]=' ')&&(s[j+1]!=' '))
             a[i]=s[j];
           else continue;
            i++;
         }
         printf("%s",a);
       return 0;
}