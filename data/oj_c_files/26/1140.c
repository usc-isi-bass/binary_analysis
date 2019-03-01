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
 char a[101];
 cin.getline(a,101);
 for(int i = 0; i < strlen(a); ++i)
 {
  if(a[i] != ' ')
  {
   if(i == strlen(a)) cout << a[i];
   else
   if(a[i+1] == ' ')
   cout << a[i] << " ";
   else 
   cout << a[i];
  }
 }
 //while(1);
 return 0;
}
