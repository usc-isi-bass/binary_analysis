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
	int n;
	cin>>n;
	char l[n][20];
	for(int i=0;i<n;i++)
		cin>>l[i];
	int len=0;
	for(int i=0;i<n;i++){
		if(len+strlen(l[i])>=80){
			cout<<endl;
			cout<<l[i];
			len=strlen(l[i]);
		}
		else if(len==0){
			cout<<l[i];
			len+=strlen(l[i]);
		}
		else {
			cout<<' '<<l[i];
			len+=strlen(l[i])+1;
		}
	}
	return 0;
}