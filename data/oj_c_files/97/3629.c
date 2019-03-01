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
  int p[6];
  p[0]=(n/100);
  p[1]=(n%100)/50;
  p[2]=(n%50)/20;
  p[3]=((n%50)-p[2]*20)/10;
  p[4]=(n%10)/5;
  p[5]=(n%5);
  for(int i=0;i<6;i++)
  {
   cout<<p[i]<<endl;
  }
  return 0;
}         