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

/*
 *????HW7_10.cpp
 *??????1100019007?
 *???2012-11-14 
 *???1090 ???? 
 */ 
int factorize(int m,int k)
{
    int c=1;//a=a??? 
    if(m<4)return 1;//?m??4??1 
    for(int i=k;i<=sqrt(m);i++)if(!(m%i))c+=factorize(m/i,k>i?k:i);//????????????????an>an-1,???k???
    return c;//????? 
}
int main(int argc, char *argv[]){
    int n,m;
    cin>>n;
    while(n--){
        cin>>m;//????
        cout<<factorize(m,2)<<endl;//????
    }
    return 0;}
