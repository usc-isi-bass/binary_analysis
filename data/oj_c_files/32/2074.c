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
	char a[100],b[100];
	int i,j,m;
	cin>>m;
	while(m!=0){
	cin>>a>>b;
	for(i=strlen(b)-1,j=strlen(a)-1;i>=0;i--,j--){
		if (a[j]-b[i]<0) {
			a[j]=10+a[j]-b[i]+48;
		    a[j-1]-=1;
		}
		else a[j]=a[j]-b[i]+48;
		}

	for(i=0;i<=strlen(a)-1;i++){
		if (a[i]!='0'){
			for(j=i;j<=strlen(a)-2;j++)
				cout<<a[j];
		        cout<<a[strlen(a)-1]<<endl;
			break;
		}
	}
	m--;
	}
	return 0;
}