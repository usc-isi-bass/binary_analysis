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
	int row=0,col=0;
	cin>>row>>col;
	int array[101][101];
	int i=0,j=0,k=0;
	for(i=0;i<row;i++)
		for(j=0;j<col;j++)
			cin>>array[i][j];
	for(k=0;(row-2*k>2)&&(col-2*k>2);k++){
		for(j=k;j<col-k;j++)
			cout<<array[k][j ]<<endl;
		for(i=k+1;i<row-k;i++)
			cout<<array[i][col-1-k]<<endl;
		for(j=col-2-k;j>=k;j--)
			cout<<array[row-1-k][j]<<endl;
		for(i=row-2-k;i>=k+1;i--)
			cout<<array[i][k]<<endl;
	}
	if(row==col){
		for(j=k;j<col-k;j++)
			cout<<array[k][j ]<<endl;
		for(i=k+1;i<row-k;i++)
			cout<<array[i][col-1-k]<<endl;
		for(j=col-2-k;j>=k;j--)
			cout<<array[row-1-k][j]<<endl;
		for(i=row-2-k;i>=k+1;i--)
			cout<<array[i][k]<<endl;
	}
	else{
		for(j=k;j<col-k;j++)
			cout<<array[k][j ]<<endl;
		for(i=k+1;i<row-k;i++)
			cout<<array[i][col-1-k]<<endl;
	}
	return 0;
}
