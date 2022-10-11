#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n;
do
{
    n = get_int("Size: ");
}
//while input is between the parameters 0 and 8
 while(n < 0 || n > 8);

//first loop
 for(int i = 0; i<n; i++)
 {
     //first nested loop create the spacing
     for(int j= 0; j < n -1 -i; j++)
     {
         printf(" ");
     }
     //second nested loop creates hash and counts the amount requested by the user
    for(int j = 0; j < i+1; j++)
    {
        printf("#");

    }
    //prints a new line
    printf("\n");
 }
}