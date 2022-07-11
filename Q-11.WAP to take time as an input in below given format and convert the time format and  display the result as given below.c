//11.WAP to take time as an input in below given format and convert the time
//format and display the result as given below.

//User Input date format-"HH:MM"
//Output Format-"HH hour and MM Minute"

//Example-
//  "11:25" converted to "11 Hour and 25 minute"


#include<stdio.h>
#include<conio.h>
int main()
{
    int HH,MM;
    printf("Enter Time HH:MM-");
    scanf("%d%d",&HH,&MM);
    printf("%d Hour and %d Minute",HH,MM);
    getch();
    return 0;
}
