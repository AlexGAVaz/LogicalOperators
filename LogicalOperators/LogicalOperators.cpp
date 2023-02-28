#include <iostream>

int main()
{
    int pin1,pin2,one1,one2,two1,two2;
    
    printf("Account registration \"One\"!\n");
    printf("Your username: ");
    scanf("%i",&one1);
    printf("Your password: ");
    scanf("%i",&one2);
    
    printf("Account registration \"Two\"!\n");
    printf("Your username: ");
    scanf("%i",&two1);
    printf("Your password: ");
    scanf("%i",&two2);
    
    printf("Login!\n");
    printf("Username: ");
    scanf ("%i",&pin1);
    printf("Password: ");
    scanf("%i",&pin2);
    
    if (((pin1==one1)&&(pin2==one2))||((pin1==two1)&&(pin2==two2)))
    {
        printf("OK\n=");
    }
    else
    {
        printf("Invalid username or password\n=");
    }
}
