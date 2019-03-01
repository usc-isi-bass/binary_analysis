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


int compare (const void * a, const void * b)
{
        return( *(int*)a - *(int*)b );
}

int main(){
        int n,k;
        cin>>n>>k;
        int a[1000];
        for(int i=0; i<n ; i++)
                cin>>a[i];
        qsort(a,n,sizeof(int),compare);
        for(int i=0 ; i<n ; i++)
                for( int j=n-1 ; j>i ; j--)
                {
                        if(a[i]+a[j]==k)
                        {
                                cout<<"yes"<<endl;
                                return 1;
                        }
                        else if(a[i]+a[j]<k)
                                break;
                }
        cout<<"no"<<endl;
        return 0;
}