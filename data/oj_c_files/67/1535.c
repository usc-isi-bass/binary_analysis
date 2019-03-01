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
{ int n,i,x,y;
  float std,t;
  
  cin>>n;
  cin>>x>>y;
  std=1.0*y/x;
  for(i=1;i<n;i++)
  { cin>>x>>y;
    t=1.0*y/x-std;
    if(t>0.05) cout<<"better";
    else  if(t<-0.05) cout<<"worse";
          else cout<<"same";
    cout<<endl;
  }
  return 0;
}