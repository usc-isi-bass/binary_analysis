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


int matrix[1000][1000]; 

int main(int argc, char *argv[])
{
    int row,col,k=0,n,i,j,l;
    cin>>n;;
    for(i=0;i<n;i++)
    {
                    for(j=0;j<n;j++)
                    cin>>matrix[i][j];
    }
    for(i=0;i<n;i++)
    {
                    for(j=0;j<n;j++)
                    {
                                    if(matrix[i][j]==0&&matrix[i][j+1]!=0&&matrix[i][j-1]!=0)
                                    {
                                       for(j;j<n;j++)
                                         {
                                           if(matrix[i][j+1]==255)
                                           k++;
                                           else
                                           break;
                                           }
                                    break;
                                    }
                                    
                                    
                                     
                                    
                    }
    }
    cout<<k<<endl;
                                    
                                                                          
                                                                          
    
    
                    
                    
   
                    
                                                                            
                                      
                                      
                    
       return 0;
}
