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



int change(int a[5][5],int x,int y);
int main(int argc, char* argv[])
{
	int n,m;
	int a[5][5],i,j;

	for(i=0;i<5;i++)
		for(j=0;j<5;j++){
			scanf("%d",&a[i][j]);
		}
	scanf("%d%d",&n,&m);//????
	

		
	if(change(a,n,m)==1){
		for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			if(j!=4)
				printf("%d ",a[i][j]);
			else
				printf("%d",a[i][j]);//??????????
		}
		printf("\n");//????
		}
	}else 
		printf("error\n");
	return 0;
	
}

int change(int a[5][5],int x,int y)//???????????????
{
	int k,temp;
	if(x>=0&&x<5&&y>=0&&y<5){
		for(k=0;k<5;k++){
			temp=a[x][k];
			a[x][k]=a[y][k];
			a[y][k]=temp;	
		}
	return 1;
	}
	else
		return 0;
}



