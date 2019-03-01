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

int d;
int fen(int i,int a)
{
  if(i>a)
  {
   return 0;
  }
  int result=1;
  int j;
  for(j=i;j<a;j++)
  {
    if(a%j==0)
    {
      result=result+fen(j,a/j);
    }
  }
  return result;
}
int main()
{
  int n;
  cin >> n;
  int k=0;
  while(k<n)
  {
    
    int a;
    cin >> a;
    int i=2;
    d=fen(i,a);
    cout << d << endl;
    k++;
  }
  return 0;
  cin.get();cin.get();cin.get();
}
