#include<stdio.h> 

struct book 
{
    int id; 
    char name[20]; 
    char author[20]; 
};  

int main()
{
       struct book b1 = {1,"Cprogram","Ritchie"}; 
       struct book b2; 
       b2=b1;
       printf("%d %s %s",b2.id,b2.name,b2.author);   
        

    //    if(b1==b2)
    //    {
    //        printf("same"); 
    //    }       
    //    else 
    //        printf("not same"); 
}
