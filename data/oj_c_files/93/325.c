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
{int n=0,s=0;//n???? s??n?????? 
cin>>n;
if (n%3==0){cout<<"3";s++;}
if (n%5==0){if (s!=0)cout<<' ';cout<<"5";s++;}if (n%7==0){if (s!=0)cout<<' ';cout<<"7";s++;}
if (s==0)cout<<"n";
return 0;
    }

