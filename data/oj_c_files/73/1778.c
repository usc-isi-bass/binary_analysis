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


int main(int argc, char *argv[])
{
  int max=0,flag=0,n=0;
  int row,col;
  int a[6][6]={0};
  int i,j,k;
  
  
  for(i=1;i<=5;i++){
                    for(j=1;j<=5;j++){
                                      scanf("%d",&a[i][j]);
                                      }
                    } 



  for(i=1;i<=5;i++,max=0){
                    
                    for(j=1;j<=5;j++){
                                      if(a[i][j]>max){
                                                      max=a[i][j];
                                                      row=i;
                                                      col=j;
                                                      }
                                      }
                                      
                                      
                    for(k=1;k<=5;k++) {
                                     if(a[k][col]<max){flag=1;break;}
                                     } 
                    if(flag==0){printf("%d %d %d\n",row,col,max);n++;}
                    else{flag=0;}
                                                     
                    } 
  if(n==0){printf("not found\n");}                                
	
  return 0;
}
