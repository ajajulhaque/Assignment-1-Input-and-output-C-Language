//4.WAP to find the area of the circle. Take radius of circle from
//user as input and print the result in below given format.
//1.Write a program to print Hello Students on the screen.
//Expected output format-"Area of circle is A having the radius R".Replace
// A with area & R with radius.
#include<stdio.h>
#include<conio.h>
int main()
{
    int R;
    printf("Enter Radius of circle:");
    scanf("%d",&R);
    float A;
    A=3.1415*R*R;
    printf("Area of circle=%f",A);
    getch();
    return 0;
}

