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

//??????



int ispo(int m)
{
	int i;
	for(i=3;i<=sqrt(m);i++)
		if (m%i==0)
			return 0;
		return 1;
}


int stevie()
{int i,j,a,b;
int n;
cin>>n;
for(i=6;i<=n;i+=2)
{
	for(j=3;j<=(i/2);j+=2)
		if((ispo(j))&&(ispo(i-j)))
		{
			cout<<i<<"="<<j<<"+"<<i-j<<endl;
			break;
		}
}

	
return 1;
}

int main()
{int a;
/*clock_t start=clock();

for(int i=1;i<100;++i)*/
a=stevie();
//cout<<"time "<<(clock()-start)/CLK_TCK<<endl;
return 0;
 }

