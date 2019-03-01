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

void p( int num )
{
while( num )
{
cout<<num%10;
num /= 10;
}
}
int main()
{
int l;
cin>>l;
if(l!=0)
p( l );
else
cout<<0;
return 0;
}