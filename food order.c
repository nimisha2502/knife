#include <stdio.h>
int main()
{
    int a;
    printf("Choose a number from these:\n1,2,3,4,5\n");
    scanf("%d",&a);
    switch(a)
    {
        case 1: 
        printf("You have got the item no.1:\nZinger Burger\nPrice:200Rs");
        break;
        case 2: 
         printf("You have got the item no.2:\nSandwich\nPrice:170Rs(veg),190Rs(non-veg)");
          break;
        case 3: 
         printf("You have got the item no.3:\nFrench Toast with Mint Lime\nPrice:180Rs");
          break;
        case 4:
         printf("You have got the item no.4\nPeri-peri Fries with Mojito(choosable)\nPrice:250Rs");
          break;
        case 5:
         printf("You have got the item no.5\nManchurian Fried momos\nPrice:150Rs");
          break;
        default:printf("Invalid choice");
    }
    return 0;
}
