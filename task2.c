#include <stdio.h>

int main() {
        float Temp_Value = 0.0;
        float celcius = 0.0;
        char Scale = ' ';
        char Convert = ' ';
        float last_temp = 0.0;

        printf("Enter the temperature you want to check:\n");
        scanf("%f", &Temp_Value);
        printf("Enter the current scale:\n");
        scanf(" %c", &Scale);
        printf("Enter the scale to convert to:\n");
        scanf(" %c", &Convert);

        if (Scale == 'C' || Scale == 'c') {
                celcius = Temp_Value;
        }
        else if (Scale == 'F' || Scale == 'f') {
                if (Temp_Value < -459.67) {
                        printf("Error, Temperature below Absolute 0.\n");
                }
                celcius = (Temp_Value - 32) * (5.0 / 9.0);
        }
        else if (Scale == 'K' || Scale == 'k') {
                if (Temp_Value < 0) {
                        printf("Temperature cannot be below absolute 0.\n");
                }
                celcius = Temp_Value - 273.15;
        }
        else {
                printf("Invalid unit: \n");
                return 1;
        }

        if (Convert == 'C' || Convert == 'c') {
                last_temp = celcius;
                printf("%f\n", last_temp);
        }
        if (Convert == 'F' || Convert == 'f') {
                last_temp = (celcius * (9.0 / 5.0)) + 32;
                printf("%f\n", last_temp);
        }
        if (Convert == 'K' || Convert == 'k') {
                last_temp = celcius + 273.15;
                printf("%f\n", last_temp);
        }

        if (celcius < 0) {
                printf("Temperature Category: Freezing!\n");
                printf("Weather advisory: Stay indoors.\n");
        }
        else if (celcius >= 0 && celcius <= 10) {
                printf("Temperature Category: Cold!\n");
                printf("Weather advisory: Cover yourself well.\n");
        }
        else if (celcius > 10 && celcius <= 25) {
                printf("Temperature Category: Comfortable!\n");
        }
        else if (celcius > 25 && celcius < 35) {
                printf("Temperature Category: Hot\n");
                printf("Weather Advisory: Drink plenty of water\n");
        }
        else if (celcius >= 35) {
                printf("Temperature Category: Extreme Heat!\n");
                printf("Weather advisory: Stay indoors.\n");
        }

        return 0;
}
                      
