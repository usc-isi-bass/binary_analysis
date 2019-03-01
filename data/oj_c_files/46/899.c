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
	int a[100][100];
	int row,col,i,j,rowsx,rowxx,colsx,colxx;
	scanf("%d%d",&row,&col);
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
		    scanf("%d",&a[i][j]); 	
		}
	}
    rowsx=row-1;
	rowxx=0;
	colsx=col-1;
	colxx=0;
	while(rowsx>rowxx && colsx>colxx){    
	    for (j=colxx;  j <colsx;j++){ 
             printf("%d\n",a[rowxx][j]); 
		} 
       for (i=rowxx;  i <rowsx;i++){ 
             printf("%d\n",a[i][colsx]); 
		} 
	   for (j=colsx;  j >colxx;j--){ 
             printf("%d\n",a[rowsx][j]); 
		} 
       for (i=rowsx;  i >rowxx;i--){ 
             printf("%d\n",a[i][colxx]); 
		} 
	   rowsx--;
	   rowxx++;
	   colsx--;
	   colxx++;
	}
	
	if(row%2==1||col%2==1){
		if(rowxx==rowsx){
		    for (j=colxx;  j <=colsx;j++){ 
             printf("%d\n",a[rowxx][j]); 
			} 
		}
		else{
		    for (i=rowxx;  i <=rowsx;i++){ 
             printf("%d\n",a[i][colsx]); 
			} 
		}
	}

return 0;
}
