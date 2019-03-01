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
	char a[31];
	cin.getline(a,31);
	int i,j,k;
	for(i=0;i<strlen(a);i++){
		if(a[i]>='0'&&a[i]<='9'){
			for(j=i+1;j<strlen(a);j++){
				if(!(a[j]>='0'&&a[j]<='9'))break;
			}
			for(k=i;k<j-1;k++)
				cout<<a[k];
			cout<<a[j-1]<<endl;
			i=j;
		}
	}
	return 0;
}