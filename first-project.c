#include <stdio.h>

float CtoF(float celsius) {
    return (celsius * 9.0 / 5.0) + 32.0;
}

float FtoC(float fahrenheit) {
    return (fahrenheit - 32.0) * 5.0 / 9.0;
}

float CtoK(float celsius) {
    return celsius + 273.15;
}

float KtoC(float kelvin) {
    return kelvin - 273.15;
}

float FtoK(float fahrenheit) {
    return CtoK(FtoC(fahrenheit));
}

float KtoF(float kelvin) {
    return CtoF(KtoC(kelvin));
}

int main() {
   float temperature;
   char unit;
   printf("Enter a temperature followed by its unit (C or F): ");
   scanf("%f %c", &temperature, &unit);

   if (unit == 'C' || unit == 'c') {
    float fahrenheit = CtoF(temperature);
    printf("%.2f C is %.2f F\n", temperature, fahrenheit);
   } else if (unit == 'F' || unit == 'f') {
    float celsius = FtoC(temperature);
    printf("%.2f F is %.2f C\n", temperature, celsius);
   } else if (unit == 'K' || unit == 'k') {
    float celsius = KtoC(temperature);
    printf("%.2f K is %.2f C\n", temperature, celsius);
    float fahrenheit = KtoF(temperature);
    printf("%.2f K is %.2f F\n", temperature, fahrenheit);
   } else if (unit == 'C' || unit == 'c') {
    float kelvin = CtoK(temperature);
   } else if (unit == 'F' || unit == 'f') {
    float kelvin = FtoK(temperature);
   } else {
     printf("Bo are we semrious right neow");
   }
   getchar(); 
}