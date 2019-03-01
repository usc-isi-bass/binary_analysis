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

int a[256],i;
int j=0;
char str[256];
for (i=0;i<256;i++) a[i]=0;
gets(str);

i=0;
while(str[i]) 
  a[str[i++]]++;
    for (i='A';i<='Z';i++)
   if (a[i])
   {
     printf("%c=%d\n",i,a[i]);
     j++;
   }
   for (i='a';i<='z';i++)
   if (a[i])
   { 
     printf("%c=%d\n",i,a[i]);
     j++;
    }
   if(j==0)
   printf("No");
return 0;
}
