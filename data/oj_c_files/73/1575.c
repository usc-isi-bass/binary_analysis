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
	int m,n,i,j,k=0;
    int result1=0,result2=0;
    int a[10][10];
for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			scanf("%d",&a[i][j]);
		}
}
for(i=0;i<5;i++){
	for(j=0;j<5;j++){
		for(m=0;m<5;m++){
			if(a[i][j]<a[i][m])   {result1++;}  }
		for(n=0;n<5;n++){
			if(a[i][j]>a[n][j])  {result2++;}   }
			  if(result1==0&&result2==0)   {printf("%d %d %d",i+1,j+1,a[i][j]);}
			  else {k++;}
		result1=0;
		result2=0;
	}
}
		
if(k==25)	{printf("not found");}	
return 0;
}