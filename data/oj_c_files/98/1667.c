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

int main (){
	int n,t=0;
		cin>>n;
		char word[n][41];
		char *p[n];//????????,?????
		for(int i=0;i<n;i++){
			cin>>word[i];
			p[i]=word[i];
		}
		for(int i=0;i<n;i++){
			t+=strlen(word[i])+1;
		    if(t+strlen(word[i+1])<=80){
		    	if(i==n-1){
		    		cout<<p[i];
		    	    break;
		    	}
		    	cout<<p[i]<<" ";
		    }
		    if(t+strlen(word[i+1])>80){
		    	cout<<p[i]<<endl;
		    	t=0;
		    }
		}

	return 0;
}
