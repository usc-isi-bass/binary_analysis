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
{
char text[200],a,b; int i,j;
gets(text);printf("\n");
a=text[0]; 
for(i=0;i<strlen(text);i++)   if(text[i]!=a)  {b=text[i];break;}
for(i=0;i<strlen(text);i++)
{if(text[i]==b)   
  {for(j=i;j>=0;j--)   if(text[j]==a)   
    {text[j]='c';  printf("%d %d\n",j,i);break;}}}
}

