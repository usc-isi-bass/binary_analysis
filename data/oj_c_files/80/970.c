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




int main() {
	int a[2][3];
	int i,j,n=0,m=0,p=0;
	int b[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	int c[12]={31,29,31,30,31,30,31,31,30,31,30,31};
	

	for(i=0;i<2;i=i+1){
		for(j=0;j<3;j=j+1){
			scanf("%d",&a[i][j]);
		}
		
	}
	if(a[0][0]!=a[1][0]){
	for(i=a[0][0]+1;i<=a[1][0]-1;i=i+1){
		if((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0)){
			n=n+366;
			
		}
		else{
			n=n+365;
		}
		
	}
	if((a[1][0] % 4 == 0 && a[1][0] % 100 != 0) || (a[1][0] % 400 == 0)){
		for(i=0;i+1<=a[1][1]-1;i=i+1){
		m=m+c[i];	
		}
		m=m+a[1][2];
		
	}
    else{
		for(i=0;i+1<=a[1][1]-1;i=i+1){
		m=m+b[i];	
		}
		m=m+a[1][2];
	
	}
	if((a[0][0] % 4 == 0 && a[0][0] % 100 != 0) || (a[0][0] % 400 == 0)){
		for(i=a[0][1];i+1<=12;i=i+1){
		p=p+c[i];	
		}
		p=p+c[a[0][1]-1]-a[0][2];
	
	}
	else{
		for(i=a[0][1];i+1<=12;i=i+1){
		p=p+b[i];	
		}
		p=p+b[a[0][1]-1]-a[0][2];
	
	}
}

else {
    if(a[0][1]!=a[1][1]){
	    if((a[1][0] % 4 == 0 && a[1][0] % 100 != 0) || (a[1][0] % 400 == 0)){
	    	for(i=a[0][1]-1;i+1<=a[1][1]-1;i=i+1){
			n=n+c[i];
		}
		n=n-a[0][2]+a[1][2];
	}
	else{
		for(i=a[0][1]-1;i+1<=a[1][1]-1;i=i+1){
			n=n+b[i];
		}
		n=n-a[0][2]+a[1][2];
		
	}

	
	
}
else{
	n=a[1][2]-a[0][2];
}
}
	

	n=n+m+p;
	printf("%d",n);
	
	
	
	
	
	
	return 0;
}