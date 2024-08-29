#include <stdio.h>
int main() {
    
    float cash, change, bill, apple, appleS, mango, mangoS, orange, orangeS;
    
    printf("Enter your cash:");
    scanf("%f",& cash);
    
    printf("How many apple will you get?");
    scanf("%f",& apple);
    appleS=apple * 50;
    printf("apple: %f \n", appleS);
    
    printf("How many mangoes will you get?");
    scanf("%f",& mango);
    mangoS=mango * 45;
    printf("mango: %f \n", mangoS);
    
    printf("How many orange will you get?");
    scanf("%f",& orange);
    orangeS=orange * 70;
    printf("orange: %f \n", orangeS);
    
    bill=appleS + mangoS + orangeS;
    printf("your bill is %f \n", bill);
    
    change=cash - bill;
    printf("you have change that ammounting of %f", change);
    
    return 0;
    
}
    
    
    
    
