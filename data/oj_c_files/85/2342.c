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
       int n;
       scanf("%d",&n);
       char s[100][100];   
       int i,j,a[100];   
       for(i=0;i<n;i++) {scanf("%s",&s[i]);}
       for(i=0;i<n;i++) { 
                 a[i]=0;  
      for(j=0;s[i][j]!='\0';j++)  {
                     if(j==0)   { 
                    if( (s[i][j]>='A'&&s[i][j]<='Z')|| (s[i][j]>='a'&&s[i][j]<='z')||(s[i][j]=='_'))
                    a[i]=1;
                else   {  
                        a[i]=0; 
                        break; 
                          }
                          }
        else if(j>0){
                if ((s[i][j]>='A'&&s[i][j]<='Z')||(s[i][j]>='a'&&s[i][j]<='z')||(s[i][j]=='_') || (s[i][j]>='0'&&s[i][j]<='9'))
                  a[i]=1;   
        else   {    a[i]=0;    break;   }  }
        else   {    a[i]=0;    break;   }  }  
        if(a[i]==0) printf("no\n"); 
         else printf("yes\n"); } 
             return 0;
             }