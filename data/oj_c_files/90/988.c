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

int count (int,int);
int main()
{
	int m,n,t;
	cin>>t;
	int i;
	for (i=0;i<t;i++)
	{
		cin>>m>>n;
		cout<<count(m,n)<<endl;
	}
}
int count (int a,int b)
{
  if (a==1||b==1||b==0)
	  return 1;
  if (a<b)
	  return count(a,a);
  return (count(a, b - 1) + count(a - b, b));
} 
