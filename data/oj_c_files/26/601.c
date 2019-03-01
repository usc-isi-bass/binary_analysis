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
 char a[101],c;
 int i=1;
 while((c=cin.get())!='\n')
 {
  a[i]=c;
  if(a[i]==' ')
  {
   if(a[i]==a[i-1]) 
   {i++;continue;}
   else 
   {cout<<" ";i++;}
  }
  else
  {
	cout<<a[i];i++;
  }
 }
 return 0;
}