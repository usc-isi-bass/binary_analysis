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
    int z,q,s,l,j;
    char rank[6];
    
    for(z=1;z<=5;z++)
    {
        for(q=1;q<=5;q++)
        {
            if(z!=q)
            {
                    for(s=1;s<=5;s++)
                    {
                        if(s!=z&&s!=q)
                        {
                            for(l=1;l<=5;l++)
                            {
                              if(l!=z&&l!=q&&l!=s)
                              {
                                memset(rank,0,sizeof(rank));
                                rank[z]='z';
                                rank[q]='q';
                                rank[s]='s';
                                rank[l]='l';
                                
                                if((z+q==s+l)&&(z+l>s+q)&&(z+s<q))
                                {
                                    
                                    for(j=5;j>=1;j--)
                                    {
                                                 if(rank[j]!=0)
                                                 {
                                                               cout<<rank[j]<<' '<<j*10<<endl;
                                                 }
                                    }
                                }
                                                
                              }
                            }         
                        }
                    }
            }
        }
    } 
  
    return 0;                 
}
