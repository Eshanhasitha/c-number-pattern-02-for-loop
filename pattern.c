#include<stdio.h>
int main(){
    
    //variable to store the number of rows
    int rows;
    printf("Enter the number of rows: ");
    scanf("%d",&rows);
    int a=rows;

    //loop to iterate through the rows
    for (int i=1;i<=a;i++)
    {
        //loop to iterate through the columns
        for (int j=1;j<=i;j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }

    //loop to iterate through the rows
    for (int k=a-1;k>=1;k--)
    {
        //loop to iterate through the columns
        for(int l=1;l<=k;l++)
        {
            printf("%d",l);
        }
        printf("\n");
    }
    
    
    
    


    
}
