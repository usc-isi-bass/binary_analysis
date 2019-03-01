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
{   char a[100],*p1,*p2,str[100];
    gets(a);
    p1=a;
    p2=str;
    int num=0;
    while(*p1!='\0'){
        if ((*p1)>='0'&&(*p1)<='9') 
        {*p2=*p1;
        p1++;p2++;
        num=0;
        }
        if (((*p1)<'0'||(*p1)>'9')&&num==0) {*p2='\0';
                                             p2=str;
                                             cout<<p2<<endl;
                                             p1++;
                                             num++;}
        if (((*p1)<'0'||(*p1)>'9')&&num>0)    p1++;                                 
        
              }
              
      return 0;
}