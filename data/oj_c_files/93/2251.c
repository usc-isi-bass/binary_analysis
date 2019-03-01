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
int a;
cin>>a;
int s,t,d;
s=(a%3==0);
t=(a%5==0);
d=(a%7==0);
if(s&&t&&d==1) cout<<"3 5 7"<<endl;
if(s&&(!t)&&d==1) cout<<"3 7"<<endl;
if(s&&t&&(!d)==1) cout<<"3 5"<<endl;
if((!s)&&t&&d==1) cout<<"5 7"<<endl;
if((!s)&&(!t)&&d==1) cout<<"7"<<endl;
if((!s)&&t&&(!d)==1) cout<<"5"<<endl;
if(s&&(!t)&&(!d)==1) cout<<"3"<<endl;
if((!s)&&(!t)&&(!d)==1) cout<<"n"<<endl;
return 0;
}
