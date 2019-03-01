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

//???????????????????????? ??? 1200012848 20121116

//??
int A[100];
int An;
int B[100];
int Bn;

void getAn()    //?????????
{
    cin>>An;
}

void getBn()    //?????????
{
    cin>>Bn;
}

void sortA()   //????An??
{
    for(int i=0;i<An;i++)
    {
        cin>>A[i];
    }

    sort(A,A+An);
}

void sortB()   //????Bn??
{
    for(int i=0;i<Bn;i++)
    {
        cin>>B[i];
    }

    sort(B,B+Bn);
}

void OutA()
{
    for(int i=0;i<An;i++)
    {
        cout<<A[i]<<" ";
    }
}

void OutB()
{
    for(int i=0;i<Bn;i++)
    {
        cout<<B[i];
        if(i!=Bn-1) cout<<' ';
    }
}

int main()
{
    getAn();
    getBn();
    sortA();
    sortB();
    OutA();
    OutB();
    return 0;
}
