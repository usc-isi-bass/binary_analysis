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
	char c[41];
	char *p=c;
	int n;
	cin>>n;
	int i;
	int j;
	int num=0;
	for(i=1;i<=n;i++)
	{
		cin>>c;
		for(;*p!=0;p++);
		j=p-c;
		if(num==0)
		{
			cout<<c;
			num=j;
		}
		else{
		if((num+j+1)>80)
		{
			cout<<endl<<c;
			num=j;
		}
		else if((num+j+1)==80)
		{
			cout<<' '<<c<<endl;
			num=0;
		}
		else
		{
			cout<<' '<<c;
			num+=(j+1);
		}
		}
		p=c;
	}
}