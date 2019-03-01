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

void main()
{ char str1[80];char str2[80];int i;
gets(str1);gets(str2);
for(i=0;i<80;i++)
   {if(str1[i]>=97) str1[i]=str1[i]-32;}
for(i=0;i<80;i++)
   {if(str2[i]>=97) str2[i]=str2[i]-32;}
if(strcmp(str1,str2)>0) { printf(">");}
else if(strcmp(str1,str2)<0)  {printf("<");}
else printf("=");
}