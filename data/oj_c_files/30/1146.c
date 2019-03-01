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
int n,i,sum=0;
int s[101];
cin>>n;
for(i=1;i<=n;i++)
{
	s[i]=i;
if(s[i]/10!=7)
	
 if(s[i]-s[i]/10*10!=7)
	
  if(s[i]%7!=0)
	sum=sum+s[i]*s[i];
}

cout<<sum<<endl;
}
