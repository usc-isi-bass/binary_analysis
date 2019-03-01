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
char s[100][50];
int i,a;
for(i=0;i<50;i++)
{scanf("%s",s[i]);
if(s[i][0]>122||s[i][0]<65) break;}
a=i-1;
for(i=a;i>=1;i--)
{printf("%s ",s[i]);}
printf("%s",s[0]);
}


