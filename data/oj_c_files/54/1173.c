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
 *????HW7_01.cpp
 *??????1100019007?
 *???2012-11-12
 *???????? 
 */ 
int houzi(int n,int r,int m,int k)
{
    if(r==n)return m;
    else
    {
        if(m%(n-1))return -1000000;//???????? 
        else return houzi(n,r+1,m*n/(n-1)+k,k);
    }
}
int main(int argc, char *argv[])
{
    int n,k,m,res;//??n,k,m,res
    cin>>n>>k;//??n,k
    for(m=1;;m++)//??m????? 
    {
        if(houzi(n,0,m,k)>0){
            res=houzi(n,0,m,k);
            break;
        }
        
    }
    cout<<res<<endl;//???? 
    return 0;
}
