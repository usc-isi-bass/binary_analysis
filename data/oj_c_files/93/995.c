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
int n;
cin>>n;
char a='n';
for (int i=3;i<=7;i+=2)
{
if (n%i==0)
{
if (a=='n') cout<<i;
else cout<<' '<<i;
a='\n';
}
}
cout<<a;
return 0;
}