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
    int x,y,i,j,max,k,min,q,p=0;
    scanf("%d,%d",&x,&y);
    int a[x][y];
    for(i=0;i<x;i++){
                     for(j=0;j<y;j++){
                                      cin>>a[i][j];
                                      } 
                     }
    for(i=0;i<x;i++){
                     max=a[i][0];
                     for(j=0;j<y;j++){if(a[i][j]>=max){max=a[i][j];k=j;}}
                     min=a[0][k];
                     for(j=0;j<x;j++){if(a[j][k]<=min){min=a[j][k];q=j;}}
                     if(max==min){p++;cout<<q<<"+"<<k;}
                     }
    if(p==0)cout<<"No";
   
    
    return 0;
    }