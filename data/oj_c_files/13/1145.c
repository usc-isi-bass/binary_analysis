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

/*
 *????HW5_02.cpp
 *??????1100019007?
 *???2012-10-29
 *???????????
 */ 
int src[20000];//???
int dst[100];//????? 
int main()
{
  int n,i,j,flag;//??n,i,j
  int current_pos=0;//dst????
  cin>>n; 
  for(i=0;i<n;i++)cin>>src[i];//???? 
  for(i=0;i<n;i++)
  {
        if(current_pos)
        {
            flag=1;
            for(j=0;j<current_pos;j++)
            {
                if(dst[j]==src[i])flag=0;//??????????flag???0 
            }
            if(flag==1)
            {
                dst[current_pos]=src[i];
                current_pos++;
            }
        }
        else
        {
            dst[0]=src[0];
            current_pos++;
        }
  }
  for(i=0;i<current_pos;i++){
        cout<<dst[i];//???? 
        if(i<current_pos-1)cout<<" ";
    }
  cout<<endl;
  return 0;//????
} 
