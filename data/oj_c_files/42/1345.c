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
 * ???1.cpp
 * Created on: 2012-10-28
 * Author: ???
 * ???????????
 */
int main(){
     int n,i,k,j=0,x;     //????
     cin>>n;                //??n
     int a[n];              //????
     for(i=0;i<=n-1;i++)    //????
     {
        cin>>a[i];         //????
     }
     cin>>k;               //??k
     i=0;                  //?i?0
     while(i<=n-1-j)       //????
    {
    	if(a[i]==k)        //????K
    	{
    		j=j+1;         //?j?1
    		for(x=i;x<=n-1-j;x++)   //????
    		a[x]=a[x+1];    //??????
    	}
    	else {                 //?????k
    		i=i+1;             //?i?1
    	}
    }
     for(i=0;i<=n-j-1;i++){   //????
    	 if(i==0)cout<<a[i]; //??????????
    	 else cout<<" "<<a[i]; //??????? ???????
     }
     return 0;            //????
}
