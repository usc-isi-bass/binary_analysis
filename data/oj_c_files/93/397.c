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
 int n,flag=0;
 cin>>n;
 if(n%3==0)
 {cout<<3;
  flag=1;}
 if(n%5==0)
 {if(flag)
  {cout<<" ";}
  cout<<5;
  flag=1;}
 if(n%7==0)
 {if(flag)
  {cout<<" ";}
  cout<<7;}
 if(n%3!=0&&n%5!=0&&n%7!=0)
 {cout<<"n";}
return 0;
}