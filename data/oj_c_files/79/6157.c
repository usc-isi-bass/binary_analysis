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
  int n, m, i, s=0;
  while(cin>>n>>m && n!=0 && m!=0)
  {
          s=0;
          for(i=2; i<=n; i++) 
              s=(s+m)%i;
          cout<<s+1<<endl;
  }
  return 0;
}
