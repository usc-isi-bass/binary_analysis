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
static char x1[1000],x2[1000];
int i,k;
gets(x1);
gets(x2);
for(i=0;x1[i]!='\0';i++)
  if(x1[i]>=65&&x1[i]<=90)
    x1[i]=x1[i]+32;
for(i=0;x2[i]!='\0';i++)
   if(x2[i]>=65&&x2[i]<=90)
    x2[i]=x2[i]+32;
for(i=0;x1[i]!='\0'||x2[i]!='\0';i++)
    if(x1[i]>x2[i])
     {printf(">");
      break;}
    else if(x1[i]==x2[i])
       continue;
    else {printf("<");break;}
if(x1[i]=='\0'&&x2[i]=='\0')
   printf("=");
}