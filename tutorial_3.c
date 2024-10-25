#include <stdio.h>
int main()
{
    char mobileNumber[15];
    int dataGB, callMinutes, smsCount;
    float rechargeAmount, totalAmount;
    char operator[30];
    char name[20];
    float ppergb = 10, ppermin = 0.5, ppersms = 0.2;

    // Input details from user
    printf("Enter name of customer:");
    scanf("%s", &name);

    printf("Enter Operator (e.g., Airtel, Jio, etc.): ");
    scanf("%s", operator);

    printf("Enter Mobile Number: ");
    scanf("%s", &mobileNumber);

    printf("Enter Data in GB: ");
    scanf("%d", &dataGB);

    printf("Enter Calling Minutes: ");
    scanf("%d", &callMinutes);

    printf("Enter Number of SMS: ");
    scanf("%d", &smsCount);


    // Calculate individual costs
    float dataCost = dataGB * ppergb;
    float callingCost = callMinutes * ppermin;
    float smsCost = smsCount * ppersms;

    // Calculate total amount
    totalAmount = dataCost + callingCost + smsCost;

    // Print receipt
    printf("\n--------- Recharge Receipt ---------\n");
    printf("\t--Customer Details--\t\n");
    printf("Customer name:%s\n", name);
    printf("Operator: %s\n", operator);
    printf("Mobile Number: %s\n", mobileNumber);
    printf("\t--Plan Details--\t\n");
    printf("Data (GB): %d\n", dataGB);
    printf("Calling Minutes: %d\n", callMinutes);
    printf("Number of SMS: %d\n", smsCount);
    printf("\t--Payment Details--\t\n");
    printf("Data Cost: %.2f\n", dataCost);
    printf("Calling Cost: %.2f\n", callingCost);
    printf("SMS Cost: %.2f\n", smsCost);
    printf("Total Recharge Amount: %.2f\n", totalAmount);
    printf("Thanks for using %s recharge service!\n",operator);

    printf("----------------------------------\n");

    return 0;
}
