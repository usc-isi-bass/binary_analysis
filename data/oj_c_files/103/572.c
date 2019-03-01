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
 char str[1000];
 scanf("%s",str);
 int sum,i;
 sum=1;
 for(i=1;i<=strlen(str);i++)
 { if(str[i]==str[i-1]||(str[i]-'a')==(str[i-1]-'A')||(str[i]-'A')==(str[i-1]-'a'))
   sum++;
   else
   { if(str[i-1]>='a')
   printf("(%c,%d)",str[i-1]-32,sum);
    else printf("(%c,%d)",str[i-1],sum);
    sum=1;
   }

}
 
}
