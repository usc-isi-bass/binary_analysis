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

int pe[2][100000];
int main()
{
    int n;
    cin>>n;
    int a,b;
    for(int i=0;i<n;i++)
    {
    pe[0][i]=0;
    pe[1][i]=0;
    }
    while(true)   
    {
    cin>>a>>b;
    if(a==0&&b==0)
    break;
    pe[0][a]++;
    pe[1][b]++;
    }
    for(int i=0;i<n;i++)
    {
    if(pe[0][i]==0&&pe[1][i]==n-1)
    {
    cout<<i<<endl;
    return 0;
    }
    }
    cout<<"NOT FOUND"<<endl;
    return 0;
} 
