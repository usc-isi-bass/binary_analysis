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

char a[101];
int c[101];
void match(int i,int len){int k = i + 1;
                  if(c[i]!=0){ while(k<len){if(a[k]=='('&&c[k]==1){match(k,len);}
                                  if(a[k]==')'&&c[i]==1&&c[k]==-1){c[i] = 0;c[k] = 0;}
                                  k++;}}} 
                                  
                                  
main(){int n;
       scanf("%d",&n); 
       for(int i=0;i<n;i++){
               scanf("%s",&a);
               int len = strlen(a);
               for(int j=0;j<len;j++){
                       if(a[j]=='('){c[j]=1;}
                       else if(a[j]==')'){c[j]=-1;}
                       else {c[j]=0;}}
               for(int j=0;j<len;j++){if(c[j]==1){for(int k=j+1;k<len;k++){if(c[k]==1)break;
                                                                            if(c[k]==-1){c[k]=0;c[j]=0;j=-1;break;}}}}
               printf("%s\n",a);
               for(int j=0;j<len;j++){if(c[j]==1)printf("$");
                                       if(c[j]==-1)printf("?");
                                      if(c[j]==0)printf(" ");}
                                      printf("\n");}
            
}

