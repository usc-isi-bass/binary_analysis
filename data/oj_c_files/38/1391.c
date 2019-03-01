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
	int t,n,i;
	double s,r,p;
	cin>>t;
	while (t>0)
			{
						cin>>n;s=0;p=0;
						for (i=1;i<=n;i++) { cin>>r;s+=r*r;p+=r;}
						p=p/n;
						s=sqrt(s/n-p*p);
						cout<<fixed<<setprecision(5)<<s<<endl;
						t--;
			}
}

