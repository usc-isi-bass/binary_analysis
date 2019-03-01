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

/*??????
 * ??????????? 
 */
int main(){
	int n;
	cin>>n;
	int a[20000],i,t,k=0,h;
	for(i=0;i<n;i++)
		cin>>a[i];        //????????                
	for(i=0;i<n;i++)
		for(t=i+1;t<n-k;t++)
		if(a[i]==a[t]){
		    for(h=t;h<n-k-1;h++)
		    a[h]=a[h+1]; 
			k++;
			t--;}           //??????
	    for(i=0;i<n-k-1;i++)
		cout<<a[i]<<' '; 
		cout<<a[n-k-1];    //????????
	return 0;}

