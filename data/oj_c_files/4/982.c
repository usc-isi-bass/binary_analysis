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

/*
 * ????
 * Created on: 2012-12-12
 * ??
 * Author: ???
 */

void bianli(){

}
int main(){
	int i=0,j=0,row=0,col=0;
	cin>>row>>col;
	int a[row][col], *p=*a;
	for (i=0;i<row;i++)
		for (j=0;j<col;j++)
			cin>>*(*(a+i)+j);
	/*for (i=0;i<row;i++)
			for (j=0;j<col;j++)cout<<a[i][j]<<endl;*/
	for (i=0;i<col;i++){
		p=*a+i;
		j=i+1;
		while(j){
			cout<<*p<<endl;
			p=p+col-1;
			if(j>row)j=row-1;
			else j--;
		}
	}
	for (i=1;i<row;i++){
		p=*(a+i)+col-1;
		j=row-i;
		while (j){
			cout<<*p<<endl;
			p=p+col-1;
			if(j>col)j=col-1;
			else j--;
		}
	}
	return 0;
}
