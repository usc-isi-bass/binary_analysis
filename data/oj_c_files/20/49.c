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
int i,max=0;
char str[11],substr[4],maxchar;
while(scanf("%s",str)!=EOF)
{
maxchar='\0';
scanf("%s",substr);
for(i=0;str[i];i++)
if(str[i]>maxchar)
{
max=i;
maxchar=str[i];
}
for(i=0;i<=max;i++)
 printf("%c",str[i]);
printf("%s",substr);
for(i=max+1;str[i];i++)
 printf("%c",str[i]);
printf("\n");
}
}