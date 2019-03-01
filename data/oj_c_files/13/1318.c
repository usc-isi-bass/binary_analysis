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
int n,e;
e=0;
int a[20000];
scanf("%d",&n);
for(int i=0;i<n;i++){
     scanf("%d",&a[i]);
        }
for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
        if(a[i]==a[j]){
        a[j]=0;
                }
                }
                     }
for(int i=0;i<n;i++){
           if(e==0&&a[i]!=0){
           printf("%d",a[i]);
           e=1;
           }
           else if(e==1&&a[i]!=0){
                 printf(" %d",a[i]);
                             }
           
        }     
              
           
   
int hou;
scanf("%d",&hou);
return 0;
}
