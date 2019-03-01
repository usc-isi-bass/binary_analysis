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

int main(int argc, char* argv[])
{
int i,j,n,m;	
double sum,ans,a[100];	
scanf("%d",&n);	
for (i=0;i<n;i++){		
	scanf("%d",&m);
	sum=0,ans=0;		
	for (j=0;j<m;j++){			
		scanf("%lf",&a[j]);			
		sum+=a[j];		}		
	sum=sum/m;		
	for (j=0;j<m;j++){			
		ans+=(a[j]-sum)*(a[j]-sum);		}		
	ans=ans/m;		
	ans=sqrt(ans);		
	printf("%.5lf\n",ans);	}
	return 0;

}