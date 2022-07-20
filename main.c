////////   RITWICK MUKHERJEE   ////////
////////   DAY OF THE WEEK CALCULATOR   ////////


#include<stdio.h>
#include<conio.h>
int main()
{
    for(int k=1 ; k ; )

    {
        int date, odd_day_date; // VARIABLE DECLARATION FOR DAYS
        int month, odd_day_month; // VARIABLE DECLARATION FOR MONTHS
        int year, odd_day_year, yd = 0, lyc = 0, ly = 0, ny = 0; // VARIABLE DECLARATION FOR YEARS
        int total_odd_days;

//// ODD DAYS ////    

        printf("\nDay (1 to 31): ");
        scanf("%d",&date);

        while (date>31)
        {
            printf("\nInvalid Input!! Please try again.");
            printf("\n\nDay (1 to 31): ");
            scanf("%d",&date);
        }
        odd_day_date = date % 7;

//// MONTHLY ODD DAYS ////

         printf("\nMonth (1 to 12): ");
         scanf("%d",&month);

         while (month>12)
         {
            printf("\nInvalid Input!! Please try again.");
            printf("\n\nMonth (1 to 12): ");
            scanf("%d",&month);
         }

        odd_day_month = month-1; 
                switch (odd_day_month)
                {
                    case 0:
                    odd_day_month = 0;
                    break;
                    case 1:
                    odd_day_month = 3;
                    break;
                    case 2:
                    odd_day_month = 3;
                    break;
                    case 3:
                    odd_day_month = 6;
                    break;
                    case 4:
                    odd_day_month = 8;
                    break;
                    case 5:
                    odd_day_month = 11;
                    break;
                    case 6:
                    odd_day_month = 13;
                    break;
                    case 7:
                    odd_day_month = 16;
                    break;
                    case 8:
                    odd_day_month = 19;
                    break;
                    case 9:
                    odd_day_month = 21;
                    break;
                    case 10:
                    odd_day_month = 24;
                    break;
                    case 11:
                    odd_day_month = 26;
                    break;
                    case 12:
                    odd_day_month = 29;
                    break;
                    default:
                    printf("\n\n\t\tSOME UNEXPECTED ERROR OCCURED DUE TO USER INPUT..\n\n\t\tPLEASE RUN THE PROGRAM AGAIN.");
                    break;
                }
                odd_day_month = odd_day_month % 7;

//// YEARLY ODD DAYS ////

            printf("\nYear (1200 to 2400): ");
            scanf("%d",&year);
            for (int j=1 ; j ;)
            {
                if (year>2400 || year<1200)
                {
                    printf("\nInvalid Input!! Please try again.");
                    printf("\n\nYear (1200 to 2400): ");
                    scanf("%d",&year);
                }
                else
                break;            
            }
        if (year>=1200 && year<1600)
        {
            yd = year - 1200;
            for (int i = 1 ; i < yd ; i++)
                {
                    lyc = i % 4;
                    if (i!=100 && i!=200 && i!=300 && lyc==0) //LEAP YEAR
                        ly = ly + 1 ;
                        
                    else if (i==100 || i==200 || i==300 || lyc!=0) //NORMAL YEAR
                        ny = ny + 1 ;
                }
        }
        else if (year>=1600 && year<2000)
        {
            yd = year - 1600;
            for (int i = 1 ; i < yd ; i++)
                {
                    lyc = i % 4;
                    if (i!=100 && i!=200 && i!=300 && lyc==0) //LEAP YEAR
                        
                        ly = ly + 1 ;
                        
                    else if (i==100 || i==200 || i==300 || lyc!=0) //NORMAL YEAR
                        
                        ny = ny + 1 ;
                            
                }
        }
        else if (year>=2000 && year<2400)
        {
            yd = year - 2000;
            for (int i = 1 ; i < yd ; i++)
                {
                    lyc = i % 4;
                    if (i!=100 && i!=200 && i!=300 && lyc==0) //LEAP YEAR
                        ly = ly + 1 ;
                        
                    else if (i==100 || i==200 || i==300 || lyc!=0) //NORMAL YEAR
                        ny = ny + 1 ;
                        
                }
        }
            ly = (2 * ly);
            ny = (1 * ny);
            odd_day_year = (ny+ly) % 7 ;

//// TOTAL ODD DAYS ////

        total_odd_days = odd_day_year + odd_day_month + odd_day_date;

        if(total_odd_days >6 )
        {
            total_odd_days = ((odd_day_year + odd_day_month + odd_day_date) % 7);
        }    

        switch (total_odd_days)
        {
            case 0:
                printf("\n%d/%d/%d : Sunday.", date, month, year);
                break;
            case 1:
                printf("\n%d/%d/%d : Monday.", date, month, year);
                break;
            case 2:
                printf("\n%d/%d/%d : Tuesday.", date, month, year);
                break;
            case 3:
                printf("\n%d/%d/%d : Wednesday.", date, month, year);
                break;
            case 4:
                printf("\n%d/%d/%d : Thursday.", date, month, year);
                break;
            case 5:
                printf("\n%d/%d/%d : Friday.", date, month, year);
                break;
            case 6:
                printf("\n%d/%d/%d : Saturday.", date, month, year);
                break;
            default:
                printf("\n\n\t\tSOME UNEXPECTED ERROR OCCURED..... \n\n\t\tPLEASE RUN THE PROGRAM AGAIN %d.", total_odd_days );
                break;
        }
        printf("\n\n\t\tType any number and hit 'ENTER' to find for another date.");
        printf("\n\t\tPress '0' and hit 'ENTER' to exit the application.");
        printf("\n\t\tYour Input: ");
        scanf("%d", &k);       
    }        
    return 0;
}
