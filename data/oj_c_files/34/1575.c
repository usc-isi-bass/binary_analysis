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
    int num;
    cin>>num;
    if(num>1)
    for(int i=0;;i++){
    if(num%2==1)
    {
    cout<<num;
    num=num*3+1;
    cout<<"*3+1="<<num<<endl;
    }
    if(num%2==0)
    {
    cout<<num;
    num=num/2;
    cout<<"/2="<<num<<endl;
    if(num==1)
    break;
    }
    }
    if(num==1)
  cout<<"End"<<endl;
    return 0;
}
