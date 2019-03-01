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
    int n,i,del,j,m=0;
    cin>>n;
    int a[n];//??
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cin>>del;//????del
    for(i=0;i<n;i++)
    {
        if(a[i]!=del&&m==1) {cout<<" ";m=0;}//???????m??
        if(a[i]!=del)
        {
            cout<<a[i];
            if(m==0) m=1;//m??????????
        }
        else{continue;}//?????????
        
    }

    return 0;
}