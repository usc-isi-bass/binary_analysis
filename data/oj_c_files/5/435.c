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

int main()
{  
	int i=0,t=0,j,h=0,k=0,m=0;
	char b[2][500];
	double n;
	scanf("%lf",&n);
	for(j=0;j<2;j++){
	scanf("%s",b[j]);
	}
	for(j=0;b[0][j]!='\0';j++){h++;}
    for(j=0;b[1][j]!='\0';j++){k++;}
	for(j=0;(b[0][j]!='\0')&&(b[1][j]!='\0');j++) { if(b[0][j]<65||b[0][j]>90||b[1][j]<65||b[1][j]>90) { printf("error");m=1;break;}}
	if(m==0){
		if(h!=k){ printf("error");}

	else {
		for(j=0;(b[0][j]!='\0')&&(b[1][j]!='\0');j++){                            
		t++;
		if(b[0][j]==b[1][j]) {i++;}
		}
	if((1.0*i/t)<=n) {  printf("no");} 
	else {printf("yes");}
	}
	}
   return 0;
}