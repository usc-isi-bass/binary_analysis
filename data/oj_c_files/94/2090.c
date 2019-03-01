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
          int n,a[500],i,j,k;
          cin>>n;
          for(i=0;i<n;i++) cin>>a[i];
          for(i=0;i<n-1;i++)                              //??????
        	  for(j=0;j<n-i-1;j++)
        		  if(a[j]>a[j+1])
        		  {
        			  k=a[j];
        			  a[j]=a[j+1];
        			  a[j+1]=k;
        		  }
          for(i=0;i<n;i++) if(a[i]%2!=0) {cout<<a[i];break;}       //????
          for(j=i+1;j<n;j++) if(a[j]%2!=0) cout<<","<<a[j];
          return 0;
}