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
 int i=0;
 char str[10000];
 scanf("%s",str);
 while(str[i]!='\0')
  i++;
 for(i--;i>=0;i--)
 printf("%c",str[i]);
 printf("\n");
 getchar();
 getchar();
 getchar();
 getchar();
}