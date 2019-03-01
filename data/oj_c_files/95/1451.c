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


char *upper(char *str);

/*
??????????:???????????????
str:????????
return ?????????
*/
char *upper(char *str)
{
 char *s = str;
 while(*s != '\0') {
  if (*s >= 'a' && *s <= 'z' ) {
   *s = *s - ('a' - 'A');
  }
  s++;
 }
 return str;
}


int main()
{ 
 char s[100],m[100];
 gets(s);
 gets(m);//????????? 
 int a=strcmp(upper(s),upper(m));//????????? 
 if(a==0)
 cout<<"="<<endl;
 if(a>0)
 cout<<">"<<endl;
 if(a<0)
 cout<<"<"<<endl; 
 return 0; 
}


