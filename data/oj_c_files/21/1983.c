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
  int n,i;
  double sum;
  int a[300];
  cin >>n;
  sum=0;
  for (i=0;i<n;i++)
  {
    cin >>a[i];
    sum+=a[i];
  }
  double junzhi=sum/n; 
  double b[300];
  double max=0;
  for (i=0;i<n;i++)
  {
    if (a[i]<junzhi)
      b[i]=junzhi-a[i];
    else
      b[i]=a[i]-junzhi;
    if (b[i]>max) max=b[i];
  }
  int c[300];
  int m=-1;
  for (i=0;i<n;i++)
    if (max==b[i])
    {
      m++;c[m]=a[i];
    }
  m++;int j;
  for (i=0;i<m;i++)
	  for (j=i+1;j<m;j++)
		  if (c[i]>c[j])
		  {
			  sum=c[i];c[i]=c[j];c[j]=sum;
		  }
  cout << c[0];
  for (i=1;i<m;i++)
	  cout <<',' <<c[i];
  return 0;
}