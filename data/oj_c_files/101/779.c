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
    char a[3]={'A','B','C'};
    int b[3],c[3];//b0,b1,b2????a,b,c???? 
    int i,j,k;//??? 
    for(i=0;i<3;i++)
    {
                    b[i]=0;
                    b[(i+1)%3]=1;
                    b[(i+2)%3]=2;
                    c[0]=(b[1]>b[0])+(b[2]==b[0]);
                    c[1]=(b[0]>b[1])+(b[0]>b[2]); 
                    c[2]=(b[2]>b[1])+(b[1]>b[0]); 
                    if( (c[i]==2)&&(c[(i+1)%3]==1)&&(c[(i+2)%3]==0))
                    cout<<a[i]<<a[(i+1)%3]<<a[(i+2)%3];
    }
    for(i=0;i<3;i++)
    {
                    b[i]=0;
                    b[(i+1)%3]=2;
                    b[(i+2)%3]=1;
                    c[0]=(b[1]>b[0])+(b[2]==b[0]);
                    c[1]=(b[0]>b[1])+(b[0]>b[2]); 
                    c[2]=(b[2]>b[1])+(b[1]>b[0]); 
                    if( (c[i]==2)&&(c[(i+1)%3]==1)&&(c[(i+2)%3]==0))
                    cout<<a[i]<<a[(i+1)%3]<<a[(i+2)%3];
    }
    return 0;
}
