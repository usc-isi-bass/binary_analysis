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
         char *p;
         int i;
         p=(char*)malloc(200*sizeof(char));
         gets(p);
         char *p1;
          p1=(char*)malloc(200*sizeof(char));
         for(i=0;i<strlen(p)-1;i++)
         {
                
                 *(p1+i)=*(p+i)+*(p+i+1);
                 }
         *(p1+i)=*p+*(p+i);
         for(i=0;i<strlen(p);i++)
         printf("%c",*(p1+i));
         

}
