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
int i=0,j=0,l=0,o=0,k=0,p;
char m[10000],n[100][100];
gets(m);
for(;m[i]!='\0';i++){
                 if(m[i]==' '){
                         k=0;
                         j++;
                        }
                 else {
                      n[j][k]=m[i];
                 k++;}
                }                
for(i=1;i<=j;i++){
    if(strlen(n[i])>strlen(n[o])) o=i;
    if(strlen(n[i])<strlen(n[l]))  l=i;}
cout<<n[o]<<endl<<n[l]<<endl;                                                                                                       

return 0;
}
