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
  int a,a0,t,i,j,n,m;

  cin>>n;
  for(i=0;i<n;i++)
  { cin>>m;t=0;a=0;
    for(j=0;j<m;j++)
    { cin>>a;
      t+=3;//time not jumping
      a+=t;//the time that has passed so far
      if(a>60) break;
    }
	j++;
	while(j<m){cin>>a0;j++;}
    t=60-t;
    if(a>60)//it's already over when stop counting
      switch(a)
      { case 61:t++;break;
        case 62:t+=2;break;
        default:t+=3;//count one more pausing round
      }
    cout<<t<<endl;
  }
  return 0;
}