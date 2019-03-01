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
	int n,f[21]={1,1};
	cin>>n;
	for (int j=2;j<20;j++)
		f[j]=f[j-1]+f[j-2];
	for(int i = 0;i<n;i++){
		int x;
		cin>>x;
		cout<<f[x-1]<<endl;
	}
	return 0;
}