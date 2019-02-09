// #include <stdio.h>

// //1. initialize and define a float called hours to 0, a float called pay_rate 
// //2. ask user to enter number (float if decimal) of hours in a week
// //3. use scanf() to capture input. 
// //4. define pay_rate as 12.00 * hours

// int main(int argc, char * argv[])
// {
//     //1. 
//     // float hours = 0.00;
//     // float pay_rate = 0.00;

//     float hours;
//     float forty_hours;
//     float pay_rate;
//     float shift_total;
//     float time_half_total;

//     float gross_pay;
//     float taxes;
//     float net_pay;

//     //2. 
//     printf("How many hours did you work this week? : \n");

//     //3. 
//     scanf("%f", &hours);

//     // check what is being held in hours, by looking at the address of hours using &
//     printf("The amount of hours the user entered is %f\n", hours);

//     //4. define payrate
//     pay_rate = 12.00;
//     // printf("pay_rate is equal to %.2f\n", pay_rate);

//      //5 define shift total
//     // shift_total = pay_rate * hours;

   
//     if (hours > 40)
//     {
//         // forty_hours = pay_rate * hours;
//         // printf("forty_hours is pay_rate * hours which equals %.2f\n", forty_hours);


//         time_half_total = (hours - 40) * 1.5 * pay_rate;
//         printf("time_half_total is (hours - 40) * 1.5 * pay_rate if hours are greater than 40, which equals %.2f\n", time_half_total);

//         gross_pay = time_half_total + (40 * pay_rate);
//         printf("gross_pay is time_half_total + forty_hours, which equals %.2f\n", gross_pay);
//     } else 
//     {
//         // shift_total = pay_rate * hours;
//         // printf("shift_total is pay_rate * hours if hours are less than 40, which equals %.2f\n", shift_total);

//         forty_hours = pay_rate * hours;
//         printf("shift_total is pay_rate * hours if hours are less than 40, which equals %.2f\n", forty_hours);
        
//         gross_pay = forty_hours;
//     };


//     if (gross_pay < 300)
//     {
//         printf("No taxes applied\n");
//     }
//      else if (gross_pay > 450)
//     {
//         taxes = gross_pay * .25;
//         printf("The taxes on shift total >= 450 are %f\n", taxes);  
//     }  
//     else if (300 < gross_pay && gross_pay < 450)
//     {
//         taxes = gross_pay * .20;
//         printf("The taxes on 300 <= shift total <= 450 are %f\n", taxes);    
//     }
//      else if ( gross_pay == 300)
//     {
//         taxes = gross_pay * .15;
//         printf("The taxes on shift total > 300 are %f\n", taxes);
//     }
//      else {
        
//     }
    
    
//     return 0;
// }

#include <stdio.h>
#include <stdlib.h>

// Use constants for pay rate and taxes using #define
#define PAYRATE 12.00
#define TAXRATE_300 .15
#define TAXRATE_150 .20
#define TAXRATE_REST .25
#define OVERTIME 40 

int main(int argc, char * argv[])
{
    // declare variabels for hours, grossPay, taxes, netPay
    float hours = 0.00;
    float grossPay = 0.00;
    float taxes = 0.00;
    float netPay = 0.00;

    //Prompt user to enter a number
    printf("Please enter hours worked this week\n");
    scanf("%f", &hours);

    //calculate gross pay
    if(hours <= 40)
    {
        grossPay = PAYRATE * hours;
    }
    else
    {
        grossPay = 40 * PAYRATE;
        double overTimePay = (hours - 40) * PAYRATE * 1.5;
        grossPay += overTimePay;
    };

    //Calculate taxes
    if (grossPay <= 300)
    {
        taxes = grossPay * TAXRATE_300;
    }
    else if (grossPay > 300 && grossPay <= 450)
    {
        taxes = 300 * TAXRATE_300;
        taxes += (grossPay - 300) * TAXRATE_150;
    }
    else (grossPay > 450)
    {
        taxes = 300 * TAXRATE_150;
        taxes += 150 * TAXRATE_150;
        taxes += (grossPay - 450) * TAXRATE_REST;
    };

    // Calculate netPay
    netPay = grossPay - taxes; 
    
    printf("Your grossPay this week is: %.2f\n", grossPay);
    printf("Your taxes this week is: %.2f\n", taxes);
    printf("Your netPay this week is: %.2f\n", netPay);
    


    return 0;
}