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
 char s[50];
 cin.getline(s,51);
 int i=0;
 while(s[i]!='\0')
 {
   while(s[i]<=57&&s[i]>=48)
   {
	   cout<<s[i];i++;
	   if(s[i]>57||s[i]<48) cout<<'\n';
   }
   i++;
 }
 return 0;
}