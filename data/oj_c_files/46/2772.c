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

int a[10000][10000];
int main(){
 int  row,col,i,j,k=0,r,c,p=0;
 scanf("%d%d",&r,&c);
 for(i=0;i<r;i++){
	 for(j=0;j<c;j++){
       scanf("%d",&a[i][j]);
 }
 }

 for(row=r,col=c;(row>0)&&(col>0);row=row-1,col=col-1){
 	if(p!=r*c){
     for(j=k;j<col;j++){
	   printf("%d\n",a[k][j]);
	   p++; 
     }
 	}else{
	 break;
	 }
     if(p!=r*c){
	 for(i=k;i<row-1;i++){
	   printf("%d\n",a[i+1][col-1]);
	   p++;
	 }
     }else{
	 break;
	 }
	 if(p!=r*c){
	 for(j=col-1;j>k;j--){
	   printf("%d\n",a[row-1][j-1]);
	   p++;
	 }
	 }else{
	 break;
	 }
	 if(p!=r*c){
	   for(i=row-1;i>k+1;i--){
	     printf("%d\n",a[i-1][k]);
	     p++;
	 }
	 }else{
	 break;
	 }
	 k++;
 
 }
return 0;
}

