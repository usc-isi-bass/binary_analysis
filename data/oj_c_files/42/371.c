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

/*
 *????????????
 *?????
 *??: 2010-11-4
 */

int main(){
	int a[100000];//????????
	int i,j,n,k,p,q;
	cin>>n;//??????
	for(i=0;i<n;i++)//?????????
	  cin>>a[i];
	cin>>k;//?????????
	for(i=0,p=0;p<n-1;p++){//???n-1???
		if(a[i]==k)//?????k
			for(j=i;j<n-1;j++)//?????
				a[j]=a[j+1];
		else i++;//??????k???+1
		}
	  if(i==0){
		  if(a[i]!=k) cout<<a[i];//????????
	      }
	  if(i==1){
		  cout<<a[0];
	      if(a[i]!=k) cout<<" "<<a[i];//????????
	      }
	  if(i>1){
	      cout<<a[0];
	      for(q=1;q<i;q++) cout<<" "<<a[q];
	      //??????n-1??????k??
	      if(a[i]!=k) cout<<" "<<a[i];
	      }//????????
	return 0;
}