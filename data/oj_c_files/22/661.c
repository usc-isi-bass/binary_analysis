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
    int ary[100];  char comma;
    int i,j,k;     int max,sec, count ;
    scanf("%d", &ary[0]); i=1;
    while(scanf("%c", &comma)!=EOF){
           scanf("%d",&ary[i]); 
           i++;
    }
    count =i-1;
    max= ary[0];              sec= -1;
    for(j=0; j<count ;j++){
             if(ary[j] > max){
                      sec= max;
                      max= ary[j];         
             }
             else if(ary[j] == max){
                  max= ary[j];
             }
             else if(ary[j] > sec){
                  sec= ary[j];
             }
          
    }
    if(sec != -1){
           
           cout << sec  ;
    }     
    else {
         cout <<"No";
    }
    
   
    return EXIT_SUCCESS;
}
