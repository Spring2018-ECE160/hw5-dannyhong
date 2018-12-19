#include <stdio.h>
#include <stdlib.h>
 
static char daytab[2][13] = {
        {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
        {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}
};
 
int day_of_year(int year, int month, int day){
        if( year < 1752 ){
                return -1;
        }
        int i;
        int leap;
        leap = (year % 400 == 0) || (year % 4 == 0 && year % 100 != 0);
 
        if(!((month >= 1 && month <= 12) && (day >= 1 && day <= daytab[leap][month]))){
                return -1;
                }
        for(i = 1; i < month; i++){
                day += daytab[leap][i];
        }
        return day;
}
 
void month_day(int year, int yearday, int *pmonth, int *pday)
{       
        if( year < 1752 ){
                *pmonth = *pday = -1;
                return;
        }
        
        int i, leap; 
        leap = (year % 400 == 0) || (year % 4 == 0 && year % 100 != 0);
        
        if(!(yearday >= 1 && yearday <= (leap ? 366 : 365))){
                *pmonth = *pday = -1;
                return;
        }               
 
}
        
        for(i = 1; yearday > daytab[leap][i]; i++)
                yearday -= daytab[leap][i];
        *pmonth = i;
        *pday = yearday;
}
 
int main(){
        int month, day, year, yearday, retval;
        printf("Case 1:\n");
        year = -2017;
        month = 12;
        day = 23;
        yearday = 227;
 
        retval = day_of_year(year, month, day);
        if(retval == -1)
                printf("Incorrect input\n");
        else
                printf("%d %d %d <---> %d %d\n", year, month, day, year, retval);
 
        month_day(year, yearday, &month, &day);
        if(month == -1 && day == -1)
                printf("Incorrect input\n");
        else
                printf("%d %d <--> %d %d %d\n", year, yearday, year, month, day);
        printf("\n");
        printf("Case 2:\n");
        year = 2017;
        month = 12;
        day = 23;
        yearday = 227;
 
        retval = day_of_year(year, month, day);
        if(retval == -1){
                printf("Invalid input\n");
                }
        else{
                printf("%d %d %d <--> %d %d\n", year, month, day, year, retval);
                }
        month_day(year, yearday, &month, &day);
        if(month == -1 && day == -1){
                printf("Incorrect input\n");
                }
        else{
                printf("%d %d <--> %d %d %d\n", year, yearday, year, month, day);
                }
        printf("\n");
        printf("Case 3:\n");
 
       printf("Case 3:\n");
        year = 2017;
        month = 12;
        day = 23;
        yearday = 227;
 
        retval = day_of_year(year, month, day);
        if(retval == -1){
                printf("Invalid input\n");
                }
        else{
                printf("%d %d %d <---> %d %d\n", year, month, day, year, retval);
                }
        month_day(year, yearday, &month, &day);
        if(month == -1 && day == -1){
                printf("Incorrect input\n");
                }
        else{
                printf("%d %d %d <--> %d %d\n", year, yearday, year, month, day);
                }
        printf("\n");
        printf("Case 4:\n");
        year = 2017;
        month = 12;
        day = 23;
        yearday = 227;
 
        retval = day_of_year(year, month, day);
        if(retval == -1){
                printf("Incorrect input\n");
                }
        else{
                printf("%d %d %d <--> %d %d\n", year, month, day, year, retval);
                }
        month_day(year, yearday, &month, &day);
        if(month == -1 && day == -1)
                printf("Incorrect input\n");
        else
                printf("%d %d <---> %d %d %d\n", year, yearday, year, month, day);
        printf("\n");
        printf("Case 5:\n");
        year = 2017;
        month = 12;
        day = 23;
        yearday = 227;
 
        retval = day_of_year(year, month, day);
        if(retval == -1)
                printf("Invalid input\n");
        else
                printf("%d %d %d <--> %d %d\n", year, month, day, year, retval);
 
        month_day(year, yearday, &month, &day);
        if(month == -1 && day == -1)
                printf("Invalid input\n");
        else
                printf("%d %d %d <--> %d %d\n", year, yearday, year, month, day);
        printf("\n");
        return 0;
}



