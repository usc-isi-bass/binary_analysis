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
{  int same,i,j,k;
    char str[100],sub[100],repl[100];
   gets(str);
   gets(sub);
   gets(repl);
   for(i=0;i<strlen(str);i++)
   { same=1;
     for(j=0;j<strlen(sub);j++)
     {if(str[i+j]!=sub[j])
      same=0;
     }
     if((same==1&&str[i-1]==' ')||(same==1&&i==0))
     { printf("%s",repl);
       i+=strlen(sub)-1;
     }
     else
     printf("%c",str[i]);

   }
   return 0;
}
