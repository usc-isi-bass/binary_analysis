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
 char str[15],substr[3];
 int b,i,j;
 while (scanf("%s %s",str,substr)!=EOF)
 {
 b=strlen(str);j=0;
 str[b]=97;substr[3]=97;
 for (i=1;i<=b-1;i++)
   if (str[i]>str[j])
     j=i;
 for (i=b-1;i>=j+1;i--)
   str[i+3]=str[i];
 for (i=j+1;i<=j+3;i++)
   str[i]=substr[i-1-j];
 str[b+3]='\0';
 printf("%s\n",str);
 }
}