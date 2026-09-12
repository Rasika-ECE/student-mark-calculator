// programme to calculate the electricity bill //
#include <stdio.h>
int main() {
    int units;
    float bill;
    printf("***** PROGRAMME TO CALCULATE THE ELECTRICITY BILL *****\n");
    printf("\nEnter a units:");
    scanf("%d",&units);
    
    if(units<=100)
    bill=(units*1.50);
    
    else if(units<=200)
    bill=(100*1.50)+(units-100)*2.20;
    
    else if(units<=300)
    bill=(100*1.50)+(100*2.20)+(units-200)*4.00;
    
    else
    bill=(100*1.50)+(100*2.20)+(100*4.00)+(units-300)*6.00;

        
    printf("The electricity bill for %d units=%.2f rupees",units,bill);

    return 0;
}