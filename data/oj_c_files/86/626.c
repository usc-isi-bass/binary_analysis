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

main()
{int n,i;
 cin>>n;
 for(i=0;i<n;i++)
 {int h,j,a[100];
  cin>>h;
  if(h==0)
  {cout<<"60"<<endl;
   continue;
  }
  for(j=0;j<h;j++)
	 cin>>a[j];
  int flag=0;
  for(j=0;j<h;j++)
  {if(a[j]+3*j+3>=60)
  {flag=1;
   if(a[j]+3*j+3>63)
	   cout<<60-3*j<<endl;
   else
	   cout<<a[j]<<endl;
   break;
  }
  }
  if(flag==0)
	  cout<<60-3*h<<endl;
 }
 return 0;
}