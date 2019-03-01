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
 char s[100];
 int i,j;
 gets(s);
 char *p=s;
 for(i=0;i<strlen(s);)
 if(*(p+i)==' '&&*(p+i-1)==' ')
 {for(j=i;j<strlen(s);j++)
   *(p+j)=*(p+j+1);} 
 else i++;
 for(i=0;i<strlen(s);i++)
 printf("%c",*(p+i));
}