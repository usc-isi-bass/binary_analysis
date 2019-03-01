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
    char *p1,*p2,*p3,*p,*q;
    int i,j;
    p1=(char*)malloc(100*sizeof(char));
    p2=(char*)malloc(100*sizeof(char));
    p3=(char*)malloc(100*sizeof(char));
    q=(char*)malloc(100*sizeof(char));
    gets(p1);
    gets(p2);
    gets(p3);
    p=strstr(p1,p2);
    if(p==NULL)
      printf("%s",p1);
    else{
        for(i=0;p1!=p;p1++,i++)
       *(q+i)=*p1;
    *(q+i)='\0';
   for(j=0;j<strlen(p3);j++)
     *(q+i+j)=*(p3+j);
    for(j=0;*(p1+strlen(p2)+j)!='\0';j++)
      *(q+i+strlen(p3)+j)=*(p1+strlen(p2)+j);
     *(q+i+strlen(p3)+j)='\0';
     printf("%s",q);}
}
