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

void charu(char*p1,char*p2);
int main()
{
    char a[1000][15],b[1000][3];
    int i=0;
    while(cin>>a[i])
    {
      cin>>b[i];   
      charu(a[i],b[i]);
      i++;             
    }
return 0;    
}
void charu(char *p1,char*p2)//???????????????????????? ? 
{
     int k=0,i,maxx=0;
    while(*(p1+k)!='\0')
    {
        if(*(p1+k)>*(p1+maxx))                
          maxx=k;
          k++;              
    }   
     for(i=0;i<=maxx;i++)
        cout<<*(p1+i);
        cout<<p2;
     for(i=maxx+1;*(p1+i)!='\0';i++)
        cout<<*(p1+i);
        cout<<endl;    
}