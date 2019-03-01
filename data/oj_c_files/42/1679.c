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
 * 1.cpp
 *
 *  Created on: 2013-10-20
 *      Author: ??
 */
int main(){
	      int n,k,i,a[100000];
	      cin>>n;
	      for(i=0;i<n;i++){
	         cin>>a[i];
	      }
	      cin>>k;
	      if(a[0]==k){
	    	  for(i=1;i<n;i++) if(a[i]!=k) {a[0]=a[i];a[i]=k;break;}
	      }
	      cout<<a[0];
	      for(i=1;i<n;i++){
	    	  if(a[i]!=k) cout<<" "<<a[i];
	      }
	      return 0;
}