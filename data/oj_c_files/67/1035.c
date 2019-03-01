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
{int n,Total,Well;
 float standard,temp;
 char a[3][10]={"better","same","worse"};
 cin>>n;
 cin>>Total>>Well;
 standard=Well/(float)Total;
 for(int i=0;i<n-1;i++)
 {cin>>Total>>Well;
  temp=Well/(float)Total;
  if(temp-standard>0.05)
   cout<<a[0]<<endl;
  else if(temp-standard<-0.05)
   cout<<a[2]<<endl;
  else
   cout<<a[1]<<endl;
 }
 return 0;
}
