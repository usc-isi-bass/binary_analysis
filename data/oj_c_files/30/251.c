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
long n,s=0;
cin>>n;
for(;n>0;n--)
{
if(n/10==7||n%10==7||n%7==0) continue;
else s+=n*n;
}
cout<<s;
return 0;
}