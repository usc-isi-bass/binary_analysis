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
int N;
    cin>>N;
    int Y,M1,M2;
for (int i=0;i<N;i++){
    cin>>Y>>M1>>M2;
    int a[13]={0,3,0,3,2,3,2,3,3,2,3,2,3};
    if (Y%400==0||(Y%100!=0&&Y%4==0)) a[2]++;
    int S=0;
    for (int i=M1;i<M2;i++)S+=a[i];
    for (int i=M2;i<M1;i++)S+=a[i];
    if (S%7==0)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    }
    return 0;
    }