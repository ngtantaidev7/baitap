#include <stdio.h>
int main (){
    float degreesCelsius,degreesFahrenheit=0;
    scanf ("%f",&degreesCelsius);
    degreesFahrenheit=degreesCelsius*1.8+32;
    printf("Degrees Fahrenheit is %.2f\n", degreesFahrenheit);
    return 0;
}