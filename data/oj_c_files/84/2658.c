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


void main()
{
	int max(int a,int b);
	int n,m[100],i,m1=-32768,m2=-32768;
	scanf("%d",&n);
	for (i=0;i<n;i++)
    scanf("%d",&m[i]);
	for (i=0;i<n;i++)
		m1=max(m[i],m1);
  	for (i=0;i<n;i++)
		if(m[i]==m1)
			m[i]=-32768;
    for (i=0;i<n;i++)
		m2=max(m[i],m2);
	printf("%d\n%d",m1,m2);

}
  int max(int a,int b)
  {
	  int c;
	  c=a>b?a:b;
      return(c); 
  }
