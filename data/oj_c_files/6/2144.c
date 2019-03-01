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

int main ()
{
    int k=0;
    cin>>k;
    for (int i=0;i<k;i++)
    {
        int m=0,n=0;
        cin>>m>>n;
        int mat[100][100]={0};
        int sum=0;
        for (int j=0;j<m;j++)
        for (int k=0;k<n;k++)
        {
            cin>>*(*(mat+j)+k);
            if((j==0)||(j==m-1)||(k==0)||(k==n-1))//????????????????????? 
            {
                sum=sum+*(*(mat+j)+k);
            }
        }
        cout<<sum<<endl;
        
    }
   
    return 0; 
}
