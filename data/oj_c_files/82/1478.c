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
	int n;
	int s[100],q[100],t[100];
	
	
	int i;
	int j=0;
	int m;
	scanf ("%d",&n);
	for (i=0;i<n;i++){
		t[i]=0;
	}
	
	for (i=0;i<n;i++){
		scanf ("%d %d",&s[i],&q[i]);
		if (s[i]>=90&&s[i]<=140&&q[i]<=90&&q[i]>=60){
			t[j]++;
			
		}else if (i>=1&&s[i-1]>=90&&s[i-1]<=140&&q[i-1]>=60&&q[i-1]<=90){

				j++;
			
		}
	}
	for (i=0;i<n-1;i++){
		
			if (t[i]>t[i+1]){
				m=t[i];
				t[i]=t[i+1];
				t[i+1]=m;
			}
		
	}




		



	

    printf ("%d",t[n-1]);




    


	return 0;
}
