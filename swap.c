#include <stdio.h>

int main()
{
    int a,b;
    printf("enter two numbers:\n"); //asking to give input (eg:2,3)
    scanf("%d %d",&a,&b); //storing the 2 numbers
    printf("a=%d and b=%d \n", a,b); //printing the two numbers as a and b(a=2,b=3)
    a+=b; //assigning a the sum of a and b(a=5,b=3)
    b=a-b; //assigning b the difference of b and new a(a=5,b=2)
    a=a-b; //assigning a the difference of new a and new b(a=3,b=2)
    printf("after swapping a=%d,b=%d",a,b); //giving output(a=3,b=2)
    return 0;
}
