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
    char sen[20][100],ori[100],exc[100],c;     //??????sen ,???????ori,a???????exc
    int i=0,j;                                 //????
    do
    {
        cin>>sen[i];                           //????
        i++;
    }while((c=getchar())!='\n');               //????????
    cin>>ori;                                    
    cin>>exc;
    for(j=0;j<i;j++)
    {
        if(strcmp(sen[j],ori)==0)              //?????????????????????a
         strcpy(sen[j],exc);                   //????????????????????????b??
    }
    for(j=0;j<i-1;j++)
    {
        cout<<sen[j]<<' ';                     //????????
    }
    cout<<sen[i-1];
    return 0;

}

