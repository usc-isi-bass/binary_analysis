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
 int n,m,i,j;
 int a[25][25];
 scanf("%d",&n);
 scanf("%d",&m);
 for(i=0;i<n;i++){
	 for(j=0;j<m;j++){
	  scanf("%d",&a[i][j]);
	 }
 }
 for(i=0;i<n;i++){
	 for(j=0;j<m;j++){
		 if(i==0&&j==0){
		    if(a[i][j]>=a[i+1][j]&&a[i][j]>=a[i][j+1]&&a[i][j]>=a[i+1][j+1])
				printf("%d %d\n",i,j);
		 }
		 if(i==0&&j==m-1){
		    if(a[i][j]>=a[i+1][j]&&a[i][j]>=a[i][j-1])
				printf("%d %d\n",i,j);
		 }
		 if(i==n-1&&j==0){
		    if(a[i][j]>=a[i-1][j]&&a[i][j]>=a[i][j+1])
				printf("%d %d\n",i,j);
		 }
		 if(i==n-1&&j==m-1){
		    if(a[i][j]>=a[i-1][j]&&a[i][j]>=a[i][j-1])
				printf("%d %d\n",i,j);
		 }
         if(i<n-1&&i>0&&j==0){
		    if(a[i][j]>=a[i-1][j]&&a[i][j]>=a[i][j+1]&&a[i][j]>=a[i+1][j])
				printf("%d %d\n",i,j);
		 }
		 if(i<n-1&&i>0&&j==m-1){
		    if(a[i][j]>=a[i-1][j]&&a[i][j]>=a[i][j-1]&&a[i][j]>=a[i+1][j])
				printf("%d %d\n",i,j);
		 }
		 if(j<m-1&&j>0&&i==0){
		    if(a[i][j]>=a[i][j-1]&&a[i][j]>=a[i+1][j]&&a[i][j]>=a[i][j+1])
				printf("%d %d\n",i,j);
		 }
		 if(j<m-1&&j>0&&i==n-1){
		    if(a[i][j]>=a[i][j-1]&&a[i][j]>=a[i-1][j]&&a[i][j]>=a[i][j+1])
				printf("%d %d\n",i,j);
		 }
		 if(j<m-1&&j>0&&i<n-1&&i>0){
		    if(a[i][j]>=a[i][j-1]&&a[i][j]>=a[i-1][j]&&a[i][j]>=a[i][j+1]&&a[i][j]>=a[i+1][j])
				printf("%d %d\n",i,j);
		 }
	 }
 }
 
 return 0;
 
}