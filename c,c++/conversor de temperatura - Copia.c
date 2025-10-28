#include <stdio.h>
int main() {
    float celcius,fahr;
    printf("qual a temperatura em celcius: ");
    scanf("%f", &celcius);
     fahr = (celcius * 1.8) + 32;
     printf("a temperatura e %.2f\n",fahr);
     return 0;
}