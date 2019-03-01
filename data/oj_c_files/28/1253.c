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
char str[300][300];
int i=0,j=0,k=0;
for(i=0;i<300;i++)
 {
   scanf("%s",&str[i][0]);
   if(str[i-1][0]=='\0') break;
  }
for(;k<i-2;k++)
  printf("%d,",strlen(str[k]));
printf("%d",strlen(str[i-2]));
}