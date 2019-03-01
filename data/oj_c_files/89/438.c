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
    int n,s,flag=1;
    cin>>n;
    int a[50000],b[50000],sa[n],sb[n];
    for(int i=0;i<n;i++)  sa[i]=sb[i]=0;
    for(s=0;;s++)
    {
    cin>>a[s]>>b[s];
    if(!a[s]&&!b[s])  break;
    }
    for(int i=0;i<s;i++)
    {
    sa[a[i]]++;
    sb[b[i]]++;
    }
    for(int i=0;i<n;i++)
    {
    if(sa[i]==0&&sb[i]==n-1)
    {
    cout<<i<<endl;
    flag=0;
    }
    }
    if(flag)  cout<<"NOT FOUND";
}