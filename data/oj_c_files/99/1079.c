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
    int n,i;
    cin>>n;
    int A[n];
    double B[4]={0,0,0,0};
    for (i=0;i<n;i++) 
    {
       cin>>A[i];    
       if (A[i]<19)
          B[0]=B[0]+1;
       else 
          {
             if (A[i]<36) 
                B[1]=B[1]+1;
             else 
                {
                   if (A[i]<61)
                       B[2]=B[2]+1;
                   else
                       B[3]=B[3]+1;             
                }           
          }
    }   
    cout<<fixed<<setprecision(2)<<"1-18: "<<(B[0]*100)/n<<"%"<<'\n'<<"19-35: "<<(B[1]*100)/n<<"%"<<endl<<"36-60: "<<(B[2]*100)/n<<"%"<<endl<<"60??: "<<(B[3]*100)/n<<"%"<<endl;              
    return 0;
}