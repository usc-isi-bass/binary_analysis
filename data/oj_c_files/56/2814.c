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
void nixu(char a[]);
 int i;
 char a[10],c,n;
 gets(a);
 nixu(a);
}
 void nixu(char a[])
 {
 	int m=0,i;
 	char c;
  if(strlen(a)==1) printf("%s",a);
  else 
       {
        m=strlen(a);
        c=a[m-1];
            for(i=m-1;i>=1;i--)
                 
                   a[i]=a[i-1];
                   a[0]=c;
                   
                printf("%c",a[0]);
            for(i=0;i<m-1;i++)
            a[i]=a[i+1];
            a[m-1]='\0';
    nixu(a);
  }
 }