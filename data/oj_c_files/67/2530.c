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
{ //cout<<setiosflags(ios::fixed)<<setprecision(4);
  int n,i;
  float a,b,cx,cd,c,c0;
  cin>>n;
  cin>>a>>b;
  c0=b/a;
  cx=c0-0.05;
  cd=c0+0.05;
  for (i=1;i<=n-1;i++) 
    { cin>>a>>b;
      c=b/a;
      if (c>cd-1e-9) cout<<"better"<<endl;
      if (c<cx+1e-9) cout<<"worse"<<endl;
      if ((c<cd-1e-9)&&(c>cx+1e-9)) cout<<"same"<<endl; }
   return 0;
}
        
