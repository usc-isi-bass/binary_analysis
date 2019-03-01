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
	char name[10];
    char num[101];
	int i ,j ,k;
	while(cin>>num)
	{
                    k=0;
                    int num2[100];
                    for(i=0;i<100;i++)
                    num2[i]=0;
                    
                    i=0;
                    for(i=0;num[i]!='\0';i++)
                    {
                     num2[i]=(k*10+num[i]-'0')/13;
                     k=(k*10+num[i]-'0')%13;
                     
                     }
                     if(strlen(num)<=2&&((num[0]-'0'==1&&num[1]-'0'<=2)
                     ||(num[1]=='\0')))
                     cout<<"0";
                     if(num[0]=='1'&&(num[1]-'0')<=2)
                     for(i=2;i<=strlen(num)-1;i++)
                     {
                                cout<<num2[i];
                                }
                     else
                     for(i=1;i<=strlen(num)-1;i++)
                     {
                                cout<<num2[i];
                                }
                                cout<<endl;
                                cout<<k<<endl;               
}
	return 0;
}
	
	
	
