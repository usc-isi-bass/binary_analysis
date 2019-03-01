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
 int i,j,n,k,m;
 char *p,*q,l;
 p=(char *)malloc(100*sizeof(char));
 q=(char *)malloc(100*sizeof(char));
 gets(p);
 m=strlen(p);
 for(i=0,j=0;i<m-1;i++,j++)
    {
     *(q+j)=*(p+i)+*(p+i+1);
     printf("%c",*(q+j));
     }
 l=*p+*(p+m-1);
 printf("%c",l);
}