#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    float accAmount = 3500;
    float withdraw, add;
    int chooseAction, back, logout;
    char username[20];
    char password[20];


    printf("Please enter the Login credentials\n");
    printf("Username: ");
    scanf("%s", username);
    printf("Password: ");
    scanf("%s", password);

    if(strcmp(username, "admin") == 0 && strcmp(password, "admin1") == 0)
    {
    printf("The amount of money in the account is: %f\n", accAmount);

    printf("Please select from the following options: 1 - Add Money  || 0 - Withdraw money\n");
    scanf("%d", &chooseAction);


    if(chooseAction = 1){
        printf("Select the amount you want to add: ");
        scanf("%f", &add);
        accAmount += add;
        printf("Congrats %f have been added to your account now the account has %f amount", add, accAmount);
    }
    else if (chooseAction = 0)
    {
        printf("Select the amount you want to withdraw: ");
        scanf("%f", &withdraw);
        accAmount -= withdraw;
        printf("Congrats %f have been withdrawed from your account now the account has %f amount", add, accAmount);
    }
    }
    else
    {
        printf("Acces denied!");
    }

    return 0;
}
