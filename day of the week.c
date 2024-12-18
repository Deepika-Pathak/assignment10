#include<stdio.h>
const char* getdayofweek(int day, int month, int year) { 
    // adjustments for january and february
    if (month < 3){
         month +=12; //january =13, february =14 
         year -=1;   //previous year
    }
    int k = year % 100; //last two digits of the year
    int j = year / 100; //century (first two digits of the year)
    
    //zeller's congruence formula
    int h = (day + ((13 * (month + 1))/5) +k+(k / 4)+(j / 4)-(2*j)) %7;
     
     //map the result to a specific day of the week
     switch (h)
     {
     case 0: return "saturday";
     case 1: return "sunday";
     case 2: return "monday";
     case 3: return "tuesday";
     case 4: return "wednesday";
     case 5: return "thursday";
     case 6: return "friday";
     default : return "invalid day";
     }
}

int main(){
    int day, month, year;
    printf("enter the date (day month year):");
    scanf("%d %d %d", &day,&month,&year);

    const char* dayofweek = getdayofweek(day,month,year);
    printf("the day of the week is: %s\n", dayofweek);

    return 0;

}