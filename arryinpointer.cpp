#include<stdio.h>
 int val;
 int *ptr;
 
 val=10;
 ptr=&val;
 val=*ptr;
 
 printf("value of varibale=%d\n",val);
  printf("value of address=%p\n",ptr);//it is only for address
   printf("value of varibale=%d\n",*ptr);//%d value of varibale i.e 10
   
   //double pointer is the pointing out another two pointer
   /*why do we need pointer?
   
   


