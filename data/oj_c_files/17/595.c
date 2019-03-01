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
    int i,j;                                   //??????i`j
    char A[200];                               //??????A?????
    while (cin.getline(A,200,'\n'))
    {
    cout<<A<<endl;
    for (i=0;i<strlen(A);i++)                  //??????'('????$,')'?????,????????
    {
        if (A[i]=='(')
            A[i]='$';
        else
        {
            if (A[i]==')')
                A[i]='?';
            else
                A[i]=' ';
        }
    }
    for (i=0;i<strlen(A);i++)                   //??????'$'?'?'
    {
        if (A[i]=='?')
        {
            for (j=i;j>=0;j--)
            {
                if (A[j]=='$')
                {
                    A[i]=' ';
                    A[j]=' ';
                    break;             
                }  
            }
        }
    }
    cout<<A<<endl;                              //?????
    memset(A,'\0',sizeof(A));
    }
    return 0;
} 
