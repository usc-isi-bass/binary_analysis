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
	int count,max=0,i=0;
	while(i<n){
		count=0;
		int h,l;
		for(int j=i;j<n;j++){
			cin>>h>>l;
			if((h>140||h<90)||(l>90||l<60)){
				i++;
				break;
			}
			else{
				count++;
				if(count>max) max=count;
				i++;
			}
		}
	}
	cout<<max;
	return 0;
}