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
	char a[100];
	signed int num=1,b[100],total=0;//total??????b?????????? 
	for(int i=0;i<100;i++){
		cin.get(a[i]);
		if(a[i]=='\n')break;
		total++;
		if(a[i]==' '){
			b[num]=i;
			num++;
			}//?????????????????b[1] 
		}
		b[0]=-1;
		b[num]=total;//?????????????? 
		for(int i=num-1;i>=0;i--){
			for(int j=b[i]+1;j<b[i+1];j++){
				cout<<a[j];
				}
				if(i!=0)cout<<" ";
			}
			
			return 0;
	}