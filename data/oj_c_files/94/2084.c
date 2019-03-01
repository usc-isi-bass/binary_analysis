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

int a[600],cnt=0;
int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		int lt;
		cin>>lt;
		if(lt%2)a[++cnt]=lt;
	}
	sort(a+1,a+cnt+1);
	for(int i=1;i<cnt;i++){
		cout<<a[i]<<',';
	}
	cout<<a[cnt];

}