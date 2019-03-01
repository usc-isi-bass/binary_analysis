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
 char str[100];
 while (cin.getline(str, 101, '\n'))
 {
  if (str[0] == '\n')
   continue;
  int slen = strlen(str);
  for (char *p = str; p != &str[slen]; p++)
  {
   if (*p == ' ')
   {
    if (*(p + 1) != ' ')
     cout << ' ';
   }
   else
    cout << *p;
  }
  cout << endl;
 }
 return 0;
}
 