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
   int n;
   scanf("%d",&n);
   char zfc[256];
   for(int i=0;i<=n;i++){
          gets(zfc);
          for(int j=0;j<strlen(zfc);j++){
                  if(j==strlen(zfc)-1){
                  if(zfc[j]=='A'){
                  printf("T\n"); 
                                  }
                                    if(zfc[j]=='T'){
                  printf("A\n"); 
                                  }
                                                    if(zfc[j]=='G'){
                  printf("C\n"); 
                                  }
                                                    if(zfc[j]=='C'){
                  printf("G\n"); 
                                  }
                                      }
                                         if(j!=strlen(zfc)-1){
                  if(zfc[j]=='A'){
                  printf("T");
                                  }
                                    if(zfc[j]=='T'){
                  printf("A"); 
                                  }
                                                    if(zfc[j]=='G'){
                  printf("C"); 
                                  }
                                                    if(zfc[j]=='C'){
                  printf("G"); 
                                  }
                                      }
                  
                  }
                  }           
                                      
   int hou;
   scanf("%d",&hou);
    return 0;
}
