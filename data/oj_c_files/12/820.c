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

int a[16]={0};
int main()
{ 
  while(cin>>a[0])
  {   
	  if(a[0]==(-1)) break;
     int i,j,k,countnumber=0,countpair=0;
	  for(i=1;i<=15;i++)
	 { cin>>a[i];
	 if(a[i]==0) break;}
	 countnumber=i+1;
	 for(i=0;i<countnumber-1;i++)
		 for(j=i+1;j<countnumber;j++)
		 { if((a[i]==2*a[j])||(a[j]==2*a[i])) countpair++;
	 }
	 cout<<countpair<<endl;
  }
	 return 0;

}