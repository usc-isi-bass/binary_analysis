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
	int a[5],c[5],d[5],i,j;
	for(a[0]=1;a[0]<=5;a[0]++)
	for(a[1]=1;a[1]<=5;a[1]++)
	for(a[2]=1;a[2]<=5;a[2]++)
	for(a[3]=1;a[3]<=5;a[3]++)
	for(a[4]=1;a[4]<=5;a[4]++){
		if(a[4]!=2&&a[4]!=3&&a[0]!=a[1]&&a[0]!=a[2]&&a[0]!=a[3]
		&&a[0]!=a[4]&&a[1]!=a[2]&&a[1]!=a[3]&&a[1]!=a[4]&&a[2]!=a[3]&&a[2]!=a[4]&&a[3]!=a[4]){
			c[0]=(a[4]==1);
			c[1]=(a[1]==2);
			c[2]=(a[0]==5);
			c[3]=(a[2]!=1);
			c[4]=(a[3]==1);
			for(i=0;i<5;i++){
				d[i]=a[i]+c[i];
			} 
			sort(d,d+5);
			if(d[0]==2&&d[1]==3&&d[2]==3&&d[3]==4&&d[4]==5){
				for(i=0;i<4;i++) printf("%d ",a[i]);
				printf("%d\n",a[i]); 
			
			}
		} 
	}
	return 0;
}