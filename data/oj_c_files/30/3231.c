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
{   int n,a[100],i,j=0,sum=0;
  cin>>n;
  for(i=1;i<=n;i++)
  { if (i%7!=0&&(i-7)%10!=0&&i/10!=7)
  { a[j]=i;j++;}
  }
  for(i=0;i<j;i++)
  {  sum=sum+a[i]*a[i];}
  cout<<sum<<endl;

  
	return 0;
}

