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

int c;
void cal(int n,int k);
int main(int argc)
{  int m,n,j;
   cin>>m;
   for (j=1;j<=m;j++)
   { cin>>n;
    c=0;
	cal(n,1);
   cout<<c<<endl;}

	return 0;

}
void cal(int n,int k)
{  if (n==1)
{c++;
return;}
int i;
for (i=2;i<=n;i++)
{ if (n%i==0&&i>=k)
{cal(n/i,i);}}
}