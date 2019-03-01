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

char s[110];
void operate(){
	int pre = strlen(s);
	int len = pre;
	for(int i=len-1;i>=0;i--){
		//??????????? 
		if(s[i]==' '){
			for(int j=i+1;j<pre;j++){
				cout<<s[j];
				}
			cout<<" ";
			pre = i;
			}
		}
	for(int j=0;j<pre;j++){
		cout<<s[j];
		}
	return;
	}
int main(){
	cin.getline(s,110);
	operate();
	return 0;
	}
