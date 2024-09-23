#include <stdio.h>

int main() 
{
    printf("Enter the values in number\n");
    int date,month,year,no = 0;
    printf("Enter the date  : ");
    scanf("%d",&date);
    printf("Enter the month : ");
    scanf("%d",&month);
    printf("Enter the year  : ");
    scanf("%d",&year);
    
    switch(month-1)//adding the days before the entered month
    {
        case 11: no = no + 30;
        case 10: no = no + 31;
        case 9: no = no + 30;
        case 8: no = no + 31;
        case 7: no = no + 31;
        case 6: no = no + 30;
        case 5: no = no + 31;
        case 4: no = no + 30;
        case 3: no = no + 31;
        case 2: if(year % 4 == 0)//february in leap or non-leap
        {
            no = no + 29;
        }
        else
        {
            no = no + 28;
        }
        case 1: no = no + 31;
    }
    
    no = no + date;// adding the number of days in the month 
    printf("%d",no);
    return 0;
}
