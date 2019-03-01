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
	int i,b,n,m,x,y,simida;
	int a[10][10];

	for(y=0;y<5;y++){
		for(x=0;x<5;x++){
			scanf("%d",&a[y][x]);}}
	scanf("%d %d",&n,&m);
	if(n<5&&m<5){
		for(x=0;x<5;x++){
			simida=a[n][x];
			a[n][x]=a[m][x];
			a[m][x]=simida;}
			for(y=0;y<5;y++){
				for(x=0;x<5;x++){
					if(x==4){printf("%d\n",a[y][x]);}
					else {printf("%d ",a[y][x]);}}}
	}
	else {printf("error");}

		  return 0;
}
