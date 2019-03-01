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
 char a[100][101];
 char c;
 int i=0;
 do{
  scanf("%s",a[i]);
  scanf("%c",&c);
  i++;}while(c!='\n');
 for(i=i-1;i>0;i--)
 cout<<a[i]<<" ";
 cout<<a[0]<<endl;
return 0;
}
