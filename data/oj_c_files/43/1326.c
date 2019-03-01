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

int main(){
	int m,j,i,p;
	cin>>m;
	for(i=3;i<=m/2;i+=2)
	{
		p=0;
		for(j=2;j<=sqrt(i);j++)if(i%j==0){p=1;break;}
		for(j=2;j<=sqrt(m-i);j++)if((m-i)%j==0){p=1;break;}
		if(p==1)continue;
		else cout<<i<<" "<<m-i<<endl;
	}
	return 0;
}
