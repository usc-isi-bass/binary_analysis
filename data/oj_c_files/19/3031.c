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
    int i,temp = 0,j = 0 , len,a[1000] ,temp2;
    char str[1000],str1[101],str2[101],name[1000][101];
    gets(str);
    gets(str1);
    gets(str2);
    len = strlen(str);
    for( i =0;i<=len;i++ )
    { 
       if( str[i]!=' ')
       {
         name[temp][j]= str[i];
         j++; 
       }
       
       if( str[i] == ' ' )
       {
          a[temp] = j;
          temp ++;          
          j = 0;
       }
    }
    for( j = 0 ;j< temp ;j++ )
    {if( strcmp( str1,name[j] )==0 )
    {cout <<str2<<" ";}
     else
     cout<<name[j]<<" ";
    }
     if(  strcmp( str1,name[temp] )==0 )
     cout <<str2;
     if(  strcmp( str1,name[temp] )!=0 )
     cout<<name[temp];
}
