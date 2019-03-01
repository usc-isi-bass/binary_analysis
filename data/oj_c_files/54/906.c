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






int n,k,ini;



int main()
{
 int n,k,ini;
 int i,j;
 int apple[1001];
 memset(apple,0,sizeof(apple));

 cin>>n>>k;
 ini=n-1;
 apple[n]=n-1;
for(i=n;i>=1;i--)
{
	if(apple[i]%(n-1)==0)
	{
	apple[i-1]=apple[i]*n/(n-1)+k;
	}
	else
	{
		apple[n]+=n-1;
		i=n+1;
	}
}

cout<<apple[0]<<endl;


 

 

  return 0;

}





