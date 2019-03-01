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
int n,i,a[100];
cin>>n;
a[0]=n;
for(i=0;;i++){
	if(n-(n/2)*2==1&&n>2){
		a[i]=n*3+1;
		cout<<n<<"*3+1="<<a[i]<<endl;
	}
	if(n-(n/2)*2==0){
		a[i]=n/2;
		cout<<n<<"/2="<<a[i]<<endl;
	}
	n=a[i];
	if(a[i]==1)break;

}
cout<<"End"<<endl;
return 0;
}