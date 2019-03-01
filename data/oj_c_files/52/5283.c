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
int a,b;
int m[102];
cin>>a>>b;
for(int i = 0;i<a;i++)
{
cin>>m[i];
}
for(int i = a - b;i < a;i++)
cout<<m[i]<<" ";
for(int i = 0;i<a-b;i++)
{
cout<<m[i];
if(i != a - b -1)
cout<<" ";
}
}