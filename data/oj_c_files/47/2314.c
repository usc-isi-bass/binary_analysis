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

void get(int);
int i=1;
int main()
{   
	int n;
	cin>>n;
	get(n);
	return 0;
}
void get(int n)
{
  int a,m;
  cin>>a;i++;
  if(i<n)get(n);
  else if(i==n){cin>>m;cout<<m;}
  cout<<" "<<a;  
}