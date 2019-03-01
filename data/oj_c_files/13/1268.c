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
	int n,on=0;
	cin>>n;
	int input_array[n],output_array[100],otn_array[n];
	memset(output_array,0,sizeof(output_array));
	for(int i=0;i<n;i++) cin>>input_array[i];
	for(int i=0;i<n;i++){
		int otn=input_array[i];
		if(!output_array[otn-1]){
			output_array[otn-1]=1;
			otn_array[on]=otn;
			on++;
		}
	}
	for(int i=0;i<on;i++){
		cout<<otn_array[i];
		if(i!=on-1) cout<<' ';
	}
	return 0;
}