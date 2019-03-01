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

/*
 * 1000012826_???????.cpp
 *
 *  Created on: 2010-1-8
 *      Author: Administrator
 */

int main(){
int   i=0,j=0;
char   c;
char   s[100];
for   (;(c=getchar())!=EOF&&c!='\n';){
          if(c==' '&&j==0)   {
                  s[i++]=' ';
                  j=1;
                  }
          else   if(c==' ')   continue;
          else   {
                  s[i++]=c;
  j=0;
  }
        }
s[i]='\n';
for(i=0;s[i]!='\n';i++)
        putchar(s[i]);
        cout<<'\n';
}
