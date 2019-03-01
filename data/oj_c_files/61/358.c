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

/*??????
???   1200012876
2012?10?16?22:36:30   */
int main(){
int  n,a[1000],b[1000],N[1000];    //?????? 
cin>>n;     //????n 
for(int j=1;j<=n;j++)    
{
cin>>b[j];   //???????
if (b[j]<3)cout<<"1"<<endl; //????????3????1??? 
else                        //???3??????? 
    {for(int i=3;i<=b[j];i++)
    {
        a[1]=1,a[2]=1;
        a[i]=a[i-1]+a[i-2];
        }
        N[j]=a[b[j]];      //?a[????]?N[j] 
        cout<<N[j]<<endl;  //?? N[j] 
        }}
        return 0;
}
