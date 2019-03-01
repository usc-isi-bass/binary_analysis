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
int n,sum=0;
double s1,s2,i;
cin>>n;
for (i=0.0;i<=n;i++)
{    
	s1=floor(i/100);
	s2=floor((i-s1*100)/10);
if(i/7==floor(i/7))
	continue;

else if (s1==7||s2==7||i-s1*100-s2*10==7)
	continue;
sum+=i*i;

}
cout<<sum<<endl;
return 0;



}