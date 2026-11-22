//Converts Temp from Celsius to Fahrenheit.

#include <stdio.h>

int main()
{
    double tempC;
    double tempF;

    printf("Temperature in celsius: ");
    scanf("%lf", &tempC);

    //Use 9.0/5.0 or 1.8 instead of 9/5 to prevent integer division.
    tempF = (tempC*1.8) + 32;
    printf("Temperature in Fahrenheit: %.2f\n",tempF);
    
    return 0;
}
