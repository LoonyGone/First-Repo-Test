#include <stdio.h>

float CtoF(float celsius) {
    return (celsius * 9.0 / 5.0) + 32.0;
}

float FtoC(float fahrenheit) {
    return (fahrenheit - 32.0) * 5.0 / 9.0;
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
   } else {
    printf("Son what.");
   }

    return 0;
}