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
  int n,a,b;    
  struct p
  {
      int k;
      int count;  
  }p[10000];
  cin>>n>>a>>b;
  for(int i=0;i<n;i++)
	  p[i].count=0;
  while(!(a==0 && b==0))
  {
      p[b].count++;
      cin>>a>>b;
  }
  for(int i=0;i<n;i++)
	  if(p[i].count == n-1)
	  {    
		  cout<<i;
          return 0;
      }
  cout<<"NOT FOUND";
}