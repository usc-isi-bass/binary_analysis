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
  int a[12]={31,28,31,30,31,30,31,31,30,31,30,31};
  int n,i,y,m1,m2,j;
  scanf("%d",&n);
  for (i=0;i<n;i++)
  { 
  	int x=0,m=0;
  	scanf("%d%d%d",&y,&m1,&m2);
  	if ((y%400==0)||(y%4==0&&y%100!=0))
  	   a[1]=29;
  	if (m1>m2) {
  		m=m1;
  		m1=m2;
  		m2=m;
  	}
  	  for (j=m1-1;j<m2-1;j++)
      {
  	   x+=a[j];
      }
      if (x%7==0) printf("YES\n");
      else printf("NO\n");
    a[1]=28;
  }
}