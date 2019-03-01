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

/*???1300062804*/
int main(){
	int i,n,k,b=0;
	int f[100000];//????????????????
	cin>>n;
	cout<<endl;
	for(i=1;i<=n;i++)
	cin>>f[i-1];//????????????
	cout<<endl;
	cin>>k;
	for(i=0;i<n;i++)
	{
		if(f[i]!=k)
                  {
b=b+1;
               if(b!=1)     
 cout<<" "<<f[i];//????????????????
else cout<<f[i];
	
}
}
return 0;
}
