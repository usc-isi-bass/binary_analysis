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
    int n;
    cin>>n;
    cin.get();
    for(int i=0;i<n;i++)
    {
        char str[80];
        cin.getline(str,80);
        int j=0;
            if(!((str[0]>='a'&&str[0]<='z')||(str[0]>='A'&&str[0]<='Z')||str[0]=='_'))
            cout<<"no"<<endl;
            else
            {
        for(j=1;str[j]!='\0';j++)
        {
            if(!((str[j]>='a'&&str[j]<='z')||(str[j]>='A'&&str[j]<='Z')||(str[j]>='0'&&str[j]<='9')||str[j]=='_'))
            {
            cout<<"no"<<endl;
            break;
            }
        }
        if(str[j]=='\0')
        cout<<"yes"<<endl;
            }
    }
   
    return 0;
}
            
             
