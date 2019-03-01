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
int n,i=0;
cin>>n;
if(n%3==0)
{
cout<<"3";
i++;
}

if(n%5==0&&i>0)
{
cout<<" 5";
i++;
}
else if(n%5==0)
{
cout<<"5";
i++;
}
if(n%7==0&&i>0)
{
cout<<" 7";
i++;
}
else if(n%7==0)
{
cout<<"7";
i++;
}

if(i==0)
cout<<"n";
return 0;

}
