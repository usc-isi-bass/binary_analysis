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
   char s1[50],s2[50];
   int i,length,j=0;
   scanf("%s",s1);
   scanf("%s",s2);
   length=strlen(s1);
   for(i=0;i<length;)
      {
       if(s1[i]!=s2[j])  {i=0;j++;}       
       else  {i++;j++;}
       }
   printf("%d",j-length);
}