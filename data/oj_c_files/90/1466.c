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

//int s=0;
int fen(int m,int n)
{
  if(m==0||n==1)
  {
   return 1;
  }
  if(m>=n)
  {
   return fen(m-n,n)+fen(m,n-1);
 }
  else
  {
    return fen(m,m);
  }
} 
int main()
{
  int a;
  cin >> a;
  int i=0;
  while(i<a)
  {
   int m,n;
   cin >> m >> n;
   
   //s=0;
   cout << fen(m,n) << endl;
   
   i++;
  }
  cin.get();cin.get();cin.get();
  return 0;
}
