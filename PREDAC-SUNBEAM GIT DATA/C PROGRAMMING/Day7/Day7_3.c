//Input a month and print number of days 

#include<stdio.h> 
int main()
{
    int month; 
    printf("Enter the month");  
    scanf("%d",&month); 

    switch(month)
    {
        case 1: 
        printf("Jan has 31 days"); 
        break;  

        case 2: 
        printf("Feb has 28/29 days"); 
        break;  

        case 3: 
        printf("March has 31 days"); 
        break;  
        
        case 4: 
        printf("April has 30 days"); 
        break;  

        default: 
        printf("No idea"); 
         
    }


    return 0;
}
