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
 *????HW5_01.cpp
 *??????1100019007?
 *???2012-10-28
 *??????????? 
 */ 
int arr[100000];//???
int main()
{
  int n,i;//??n,i
  int current_pos=0;//????
  int what_to_delect;//????? 
  cin>>n; 
  for(i=0;i<n;i++)cin>>arr[i];//???? 
  cin>>what_to_delect;
  for(i=0;i<n;i++)
  {
        if(arr[i]!=what_to_delect)//?????? 
        { 
            arr[current_pos]=arr[i];//??????????? 
            current_pos++;
        }
  }
  for(i=0;i<current_pos-1;i++){
        cout<<arr[i]<<" ";//???? 
    }
    cout<<arr[current_pos-1]<<endl;
  return 0;//????
} 
