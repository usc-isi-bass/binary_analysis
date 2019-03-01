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
	int len=strlen(a);
	for(int i=0;i<len;i++){
		if('0'<=a[i]&&a[i]<='9') cout<<a[i];
		else{
			cout<<endl;
			for(int j=i;j<len;j++){
				if('0'<=a[i]&&a[i]<='9'){
					cout<<a[j];
					break;
				}
				i++;
			}
		}
	}
	return 0;
}
