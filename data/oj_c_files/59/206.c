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
    int m;
    cin>>m;
    char fj[m][m];
    for(int i=0;i<m;i++)
    {
            for(int j=0;j<m;j++)
            {
                    cin>>fj[i][j];
            }
    }
    int n;
    cin>>n;
    for(int k=1;k<n;k++)
    {
                        char temp[m][m];
            memcpy(temp,fj,sizeof(temp));
            for(int i=0;i<m;i++)
            {
                    for(int j=0;j<m;j++)
                    {
                            if(fj[i][j]=='@')
                            {
                                             if(fj[i+1][j]=='.'&&i+1<m)
                                             {
                                             temp[i+1][j]='@';
                                             }
                                             if(fj[i-1][j]=='.'&&i-1>=0)
                                             {
                                             temp[i-1][j]='@';
                                             }
                                             if(fj[i][j+1]=='.'&&j+1<m)
                                             {
                                             temp[i][j+1]='@';
                                             }
                                             if(fj[i][j-1]=='.'&&j-1>=0)
                                             {
                                             temp[i][j-1]='@';
                                             }
                                             
                            }
                    }
            }
            memcpy(fj,temp,sizeof(fj));
    }
    int s=0;
    for(int i=0;i<m;i++)
    {
            for(int j=0;j<m;j++)
            {
                    if(fj[i][j]=='@')
                    s++;
            }
    }
    cout<<s<<endl;
    
    return 0;
}
            
    
