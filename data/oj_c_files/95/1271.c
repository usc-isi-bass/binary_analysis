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
{char a[90],b[90];
 gets(a);
 gets(b);
 void zhuan(char k[90]);
 zhuan(a);
 zhuan(b);
 int i,j=0,m,n;
 for(i=0;(a[i]!='\0')&&(b[i]!='\0');i++)
   {if(a[i]>b[i]) {printf(">");j=1;break;}
    else if(a[i]<b[i]) {printf("<");j=1;break;}
    else if(a[i]==b[i]) continue;
   }
 if(j==0) printf("=");


}

void zhuan(char k[90])
{   int p;
     for(p=0;k[p]!='\0';p++)
      if((k[p]>='a')&&(k[p]<='z'))
       k[p]=k[p]-'a'+'A';
}
