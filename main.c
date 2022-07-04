#include <stdio.h>
#include <stdlib.h>
// Relational operators: > < <= >= == !=
// Logical operators: && || !
// Control structures
// 1. selection/decision making/ conditional - if
int menu();
int main()
{
    printf("Welcom to Zetech c snack shop!\n");
    menu();
    return 0;
}

int menu(){
    int item;
printf("1. Hambeurger - ksh. 50\n");
printf("2. Samosa - ksh. 50\n");
printf("3. Coffe - ksh. 40\n");
printf("Enter Item No: ");
scanf("%d",&item);
if(item > 0 && item <= 3){
    printf("item added to cart\n");
}
else{
    printf("Invalid item\n");
    menu();
}
return item;
}
