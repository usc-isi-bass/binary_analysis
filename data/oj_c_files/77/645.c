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
    char a[100];
    void peidui(char a[],int n);
    int i=1;
    a[0]=cin.get();
    while((a[i]=cin.get())!='\n')i++;//?????
    peidui(a,0);                     //????????
    return 0;                        //????????
}                                    //????????????
void peidui(char a[],int n)
{

    while(a[n]==a[0]||a[n]==0)n++;
    int i;i=n;                        //????????????
    do{i--;}while(a[i]==0);           //???????????
    cout<<i<<' '<<n<<endl;
    a[n]=0;a[i]=0;
    if(i!=0)peidui(a,n+1);
}