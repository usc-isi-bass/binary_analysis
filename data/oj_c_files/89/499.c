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

main()
{
      int n,i,k=0;
      scanf("%d",&n);
      int p[10000]={0},q[10000]={0};
      //int *p,*q;
      //p=new int[n];
      //q=new int[n];
      //p=(int*)malloc(n*sizeof(int));
      //q=(int*)malloc(n*sizeof(int));
      //for(i=0;i<n;i++)
      //{
        //              q[i]=0;    //??????????? 
         //             p[i]=0;    //?????????? 
      //}
      int a,b;
      do
      {
          scanf("%d %d",&a,&b);
          p[a]++;
          q[b]++; 
      }
      while(a!=0||b!=0);
      p[0]--;
      q[0]--;
      for(i=0;i<n;i++)
      {
                      if(q[i]==n-1&&p[i]==0)
                      {
                                          k++;
                                          printf("%d\n",i);
                      }
      }
      if(k==0)
      printf("NOT FOUND");
      //free(q);
      //free(p);
} 
