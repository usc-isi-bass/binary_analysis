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
 * ???012.cpp
 * Created on: 2012-10-14
 * ???:???
 * ??????
 */
int main(){            //???
  int z = 1,q = 1,s = 1,l = 1;                                          //??z q s l???
  for (z=1;z<=5;z++){                                                   //??z??
	  for(q=1;q<=5;q++){                                                //??q??
			  if(z!= q){                                                //??z q???
				  for (s=1;s<=5;s++){                                   //??s??
					  if (s!=z && s!=q){                               //???????
                         for(l=1;l<=5;l++){                            //??l??
                        	 if(l!=z && l!=q && l!=s ){                 //??????
						     if (z==s+l-q && z>s+q-l && z<q-s){         //??????
                        	 int a[4]={z,q,s,l},i,j,t;                  //???????i j t???
                        	 char m[4]={'z','q','s','l'},x;             //?????????x????
                        	 for (j=0;j<3;j++){                         //??3???
                        		 for(i=0;i<3-j;i++){                    //??????3-j???
                        			 if (a[i]<a[i+1]){                  //???????????
                        				 t=a[i]; a[i]=a[i+1];a[i+1]=t;            //?????
                        				 x=m[i]; m[i]=m[i+1];m[i+1]=x;}           //????????
                        			 }
                        		 }
                        	 cout<<m[0]<<" "<<a[0]*10<<endl;                           //?????
                        	 cout<<m[1]<<" "<<a[1]*10<<endl;                           //??????
                        	 cout<<m[2]<<" "<<a[2]*10<<endl;                           //?????
                        	 cout<<m[3]<<" "<<a[3]*10<<endl;                           //?????

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
