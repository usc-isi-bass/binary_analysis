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
char *p0,*p1;
int i,j;
p0=(char *)malloc(100*sizeof(char));
p1=(char *)malloc(100*sizeof(char));
gets(p0);
for(i=0,j=0;*(p0+i)!='\0';i++)
{if(*(p0+i)!=' '&&*(p0+i+1)==' '){*(p1+j)=*(p0+i);j++;*(p1+j)=' ';j++;}
else if(*(p0+i)!=' '&&*(p0+i+1)!=' ') {*(p1+j)=*(p0+i);j++;}
    else ;}
*(p1+j)='\0';
printf("%s",p1);
return 0;}

