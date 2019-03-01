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
	int i,j=0;
	for(i=0;i<strlen(a);i++){
		if(i==(strlen(a)-1)){
			if(('0'<=a[i])&&(a[i]<='9')){cout<<a[i]<<endl;}
					else if(j==0){cout<<endl;j=1;}
		}
		else if(('0'<=a[i])&&(a[i]<='9')){cout<<a[i];j=0;}
		else if(j==0){cout<<endl;j=1;}
	}
	return 0;
}
