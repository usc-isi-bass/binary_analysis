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

int i;
char row[100];
int match(int x)
{
int y;
if(x==i)
   return 1;
if(row[x]==row[0])
   y=match(x+1);
   else
   return x;
cout<<x<<" "<<y<<endl;
return match(y+1);
}
int main()
{
cin>>row;
i=strlen(row);
match(0);
return 0;
}