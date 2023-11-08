#include<stdio.h>
void main()
{
    int l,b;
    printf("enter the value of length of rectangle");
    scanf("%d",&l);
    printf("enter the value of breadth of rectangle");
    scanf("%d",&b);
    int side;
    printf("\n enter the value of side of square");
    scanf("%d",&side);
    float radius;
    printf("enter the radius of circle");
    scanf("%f",&radius);
    printf("perimeter of circle is %f",2*3.14*radius);
    printf("area of circle is %f",radius*radius*3.14);
    printf("perimeter of square is%d",4*side);
    printf("area of square is %d",side*side);
    printf("perimeter of rectangle is%d",2*(l+b));
    printf("area of rectangle is %d",l*b);
}
