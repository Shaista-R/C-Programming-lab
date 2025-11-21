#include <stdio.h>

int main() {
    float amplitude, frequency;

    printf("Enter vibration amplitude (mm): ");
    scanf("%f", &amplitude);
    printf("Enter vibration frequency (Hz): ");
    scanf("%f", &frequency);

    if (amplitude > 0.5 && (frequency >= 20 && frequency <= 50)) {
        printf("\nHigh Risk - Immediate attention required!\n");
    } 
    else if (amplitude > 0.5 || frequency > 60) {
        printf("\nMedium Risk - Monitor regularly.\n");
    } 
    else {
        printf("\nLow Risk - System operating normally.\n");
    }

    return 0;
}
