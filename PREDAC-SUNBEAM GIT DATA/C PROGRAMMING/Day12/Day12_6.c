#include<stdio.h> 
//int arr[3][3];     
int main()
{
    int arr[3][3]={1,2,3,4,5,6,7,8,9}; // 9 * 4 --> 36
   
    /*
        arr 
               [0]  [1]  [2]
     [0]        1    2    3  
     100        100  104  108 

     [1]        4    5    6 
     112       112  116  120 

     [2]        7    8    9 
     124       124  128  132 
    */

     int row,col; 

     printf("\n"); 
     for(row=0;row<3;row++)
     {
            for(col=0;col<3;col++)
            {
                    printf("%u ",&arr[row][col]);   
            }   
            printf("\n"); 
     }
     printf("\n"); 

     int *ptr[3] = { arr,arr+1,arr+2}; 
     //              100  112  124

    //   printf("%u ",ptr[0]);   
    //   printf("%u ",ptr[1]);
    //   printf("%u ",ptr[2]);       
      
     //    printf("%d",*ptr[0]);//1 
     //    printf("%d",*ptr[1]);//4  
     //    printf("%d",*ptr[2]);//7 

           //printf("%d ",*(*(ptr+0))); // 1
           //printf("%d ",*(*(ptr+1))); // 4
           //printf("%d ",*(*(ptr+2))); // 7  
     
       printf("%d ",*(*(ptr+0)+0)); // 1
       printf("%d ",*(*(ptr+0)+1)); // 2 
       printf("%d ",*(*(ptr+0)+2)); // 3   

       printf("%d ",ptr[0][0]); // 1 
       //           //*(*(ptr+0)+0)
       printf("%d ",ptr[0][1]); // 2
       //          *(*(ptr+0)+1)  
       printf("%d ",ptr[0][2]); // 3  
       

      return 0; 
}
