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
int j,k,i=0,n;char text[40];
scanf("%d",&n);
while(i<=n)
{i++;
 gets(text);
 k=strlen(text);
 if((text[k-1]=='r'&&text[k-2]=='e')||(text[k-1]=='y'&&text[k-2]=='l'))  
  text[k-2]='\0';
 else  text[k-3]='\0';
printf("%s\n",text);
}
}
