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

int shuzu(int n,int m);
int main(){
	int a[10][10];
int i,j,d;
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			scanf("%d",&a[i][j]);
		}
	}
	int n,m;
	scanf("%d%d",&n,&m);
	int s;
	s=shuzu(n,m);
	if(s==0)
		printf("error");
	else{
		
            for(j=0;j<5;j++){
				d=a[m][j];
                a[m][j]=a[n][j];
				a[n][j]=d;
			}
		for(i=0;i<5;i++){
			printf("%d %d %d %d %d\n",a[i][0],a[i][1],a[i][2],a[i][3],a[i][4]);
		}
	}
	return 0;
}


int shuzu(int n,int m){

	if(n<0||n>4||n<0||m>4){
		return 0;
	}
	else{
	
			
			return 1;
	}
}
	
	