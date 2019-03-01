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
	char a[501];
	int k;
	cin.getline(a,501);
	for(int i=1;i<=strlen(a);i++)
		for(int j=0;j<=(strlen(a)-i);j++){
			for(k=0;k<=i/2;k++){
				if(a[j+k]!=a[j+i-k])break;
			}
			if(k==(i/2+1)){
				for(int l=j;l<=j+i;l++)
					cout<<a[l];
				cout<<endl;
			}
		}
	return 0;
}
