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
	    int row,col,i,j,k;
		int a[100][100];
		cin>>row>>col;
		for(i=0;i<row;i++)
			for(j=0;j<col;j++){
				cin>>*(*(a+i)+j);
			}
		for(i=0;i<col-1;i++)
			for(j=0,k=i;k>=0&&j<row;k--,j++){
				cout<<*(*(a+j)+k)<<endl;
			}
		for(i=0;i<row;i++)
			for(j=col-1,k=i;k<row&&j>=0;k++,j--){
				cout<<*(*(a+k)+j)<<endl;
			}
}


