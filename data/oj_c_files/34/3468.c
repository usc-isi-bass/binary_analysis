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

int trail[100000];

int counter; 
int functio(int n){
    if(n%2==0){
       counter=counter+1;
       trail[counter]=n;
       return functio(n/2);
       
    }
    if(n%2==1 && n>2){
       counter=counter+1;
       trail[counter]=n;
       return functio(3*n+1);       
    }
    if(n==1){
       counter=counter+1;
       trail[counter]=1;
       return 0;      
    }


}
int main(){
    int n;
    cin>>n;
    functio(n);
    for(int i=1;i<=counter;i++){
        if (trail[i]%2==0) cout<<trail[i]<<'/'<<2<<'='<<trail[i]/2<<endl;
        else if (trail[i]>2 && trail[i]%2==1 ) cout<<trail[i]<<"*3+1="<<trail[i]*3+1<<endl;
        else cout<<"End"<<endl;   
    }
    
    
}

