/*
Name:Tabitha Muthoni 
Reg:CT100/G/26159/25
Description:Electric bill
*/

//Function prototype
float calculateElectricBill(int units);

void main()
{
    float result;
    int units;
    printf("Enter number of units consumed: \t");
    scanf("%d", &units);
    
    //function call
    result = calculateElectricBill(units);
    
    printf("The total electric bill is KSh. %.2f \n", result);
    
    return 0;
}

//Function declaration
float calculateElectricBill(int units){
    float bill;
    
    if (units <= 100) {
        bill = units * 10.0;
    }
    else if (units <= 200) {
        bill = (100 * 10.0) + ((units - 100) * 15.0);
    }
    else {
        bill = (100 * 10.0) + (100 * 15.0) + ((units - 200) * 20.0);
    }
    
    return bill;
}