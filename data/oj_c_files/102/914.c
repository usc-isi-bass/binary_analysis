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
char xb[40][7];
int n,i,j=0,z=0,k;
double h,hm[40],hf[40];

scanf("%d",&n);
for(i=0;i<n;i++){
  scanf("%s %lf",xb[i],&h);
  
  if(xb[i][0]=='m'){
  hm[j]=h;
  j++;
  }else{
  hf[z]=h;
  z++;
  }
}

for(k=1;k<j;k++){
	for(i=0;i<j-k;i++){
		if(hm[i]>hm[i+1]){
		h=hm[i];
		hm[i]=hm[i+1];
		hm[i+1]=h;
		}
	}
}

for(k=1;k<z;k++){
	for(i=0;i<z-k;i++){
		if(hf[i]<hf[i+1]){
		h=hf[i];
		hf[i]=hf[i+1];
		hf[i+1]=h;
		}
	}
}
for(i=0;i<j;i++){
printf("%.2lf ",hm[i]);
}
for(i=0;i<z-1;i++){
printf("%.2lf ",hf[i]);

}
printf("%.2lf",hf[z-1]);

return 0;
}

