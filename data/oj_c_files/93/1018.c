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
{int n;
 cin>>n;
 if((n%3==0)&&(n%5==0)&&(n%7==0))
 cout<<"3 5 7";
 else if((n%3==0)&&(n%5==0)&&(n%7!=0))
 cout<<"3 5";
 else if((n%3==0)&&(n%5!=0)&&(n%7==0))
 cout<<"3 7";
 else if((n%3!=0)&&(n%5==0)&&(n%7==0))
 cout<<"5 7";
 else if((n%3!=0)&&(n%5!=0)&&(n%7==0))
 cout<<"7";
 else if((n%3!=0)&&(n%5==0)&&(n%7!=0))
 cout<<"5";
 else if((n%3==0)&&(n%5!=0)&&(n%7!=0))
 cout<<"3";
 else if((n%3!=0)&&(n%5!=0)&&(n%7!=0))
 cout<<"n";
 return 0;
}