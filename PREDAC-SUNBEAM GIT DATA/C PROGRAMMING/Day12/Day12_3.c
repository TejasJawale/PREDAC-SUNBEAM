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

    // printf("%u ",arr); 
    // printf("%u ",arr+1);
    // printf("%u ",arr+2);  

      //printf("%u ",*arr); // address 
      printf("%u ", *(arr+0));
      /*    
            *(arr+0)
            *(100 + 0 )
            *(100)
             100 

      */

      printf("%u ", *(arr+1)); // address 
      /*        
                *(arr+1)
                *(100 + 1 * 12 )
                *(100+12)
                *(112)
                 112  
      */

      printf("%u ", *(arr+2)); // address 

    return 0; 
}
