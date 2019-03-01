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
int x,a[100][100],i,j,k,l,y=0,z=0,hang,lie;
scanf("%d,%d",&hang,&lie);
     for(i=0;i<hang;i++){
                       for(j=0;j<lie;j++){
                                       scanf("%d",&a[i][j]);}}
	 
     for(i=0;i<hang;i++){ 
                          z=0;
                          x=a[i][0];
                          k=0;
                           for(j=0;j<lie;j++){
                                            if(a[i][j]>x){
                                            x=a[i][j];
                                          k=j;  }
                                            }
						   
                                            for(l=0;l<hang;l++){
                                                           
                                                             if(x<=a[l][k])
                                                            z=z+1;
                                                             }
                                                             if(z==hang){
                                                                       
                                                             y++;
                                                             printf("%d+%d",i,k);}
                                                             }
                                                             if(y==0)
                                                             printf("No");      
return 0;
}