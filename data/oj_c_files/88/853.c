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
 char a[30];
 int i,flag=1;
 gets(a);
 char *p=a;
 for(i=0;i<strlen(a);i++)
 if(*(p+i)>='0'&&*(p+i)<='9')
 {printf("%c",*(p+i)); flag=0;}
 else if(*(p+i+1)>='0'&&*(p+i+1)<='9'&&flag==0)
 printf("\n");
}