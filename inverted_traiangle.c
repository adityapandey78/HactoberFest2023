#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number which you want the star pattern:");
    scanf("%d",&n);
   //int a=n;
    for (int i = 1; i <=n; i++) //gives the number of rows in triangle
    {
        for (int j = 1; j <=n+1-i; j++) //gives the number of stars in that coloumn basically it prints right tri. otherwise j=a
        {
            printf("*");
        }
        //a--;                //it decides to reduce the number of elemennts in each row
        printf("\n");
    }
    
    return 0;
}   /*
*****       5+1                 
****        4+2
***         3+3
**          2+4
*           
here we can see the the relation between each row and coloumn
so we can also use n+1-i in place of a to reduce the number in the coloumn*/
