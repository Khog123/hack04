#include <stdio.h>
#include <math.h>


//the programe is about to plan the retirement saving
int main(){
    
    double startBalance, monthlyContributionAmount, annualReturnRate, annualInflationRate, retirementYear;
    double balance, interest,month,adjustInflationReturnRate, totalInterestEarned;
    
    //Take infomation from the user
    printf("Enter your initial starting balance");
    scanf("%lf",&startBalance);
    printf("A monthly contribution Amount(We'll asume it will be the same over the life of the saving plan):");
    scanf("%lf",&monthlyContributionAmount);
    printf("An(average) anual rate of return(on the scale(0,1)):");
    scanf("%lf",&annualReturnRate);
    printf("An(average) annual rate of inflation(on the scale(0,1)):");
    scanf("%lf",&annualInflationRate);
    printf("Enter a number of year until retirement:");
    scanf("%lf",&retirementYear     );

    //years converting to months  
    month = retirementYear*12;
    adjustInflationReturnRate = (1 + annualReturnRate ) / ( 1 + annualInflationRate);
    printf("|Month|\t|Interest   |\tBalance            |\n");
    for (int i=1; i<=month; i++){
        interest=(adjustInflationReturnRate*startBalance)/12;
        
        //Balance value modified and stored then used again in the upper function with different value
         startBalance=startBalance+interest+monthlyContributionAmount;
        
         //I used the below concept to add all the interest/month
         totalInterestEarned=totalInterestEarned+interest;
         printf("|%5i|\t|$%10.2lf|\t|$%2lf|\n",i,interest,startBalance);    
    }
    printf("______________________________________________");
    printf("Total interest Earned: $ %0.2lf\n",totalInterestEarned);
    printf("Total Nest Egg: %0.2lf\n",startBalance);

    return 0;
}






























































































