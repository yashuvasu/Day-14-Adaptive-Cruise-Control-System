#include <stdio.h>

int main() {
    float speed, distance;

    printf("Enter Current Speed (km/h): ");
    scanf("%f", &speed);

    printf("Enter Distance from Front Vehicle (m): ");
    scanf("%f", &distance);

    printf("\n--- ADAPTIVE CRUISE CONTROL SYSTEM ---\n");

    if (distance < 10) {
        speed = 0;
        printf("🛑 STOP! Vehicle too close\n");
    }
    else if (distance < 30) {
        speed -= 20;
        if (speed < 0) speed = 0;
        printf("⚠️ Reducing Speed\n");
    }
    else if (distance < 60) {
        printf("🚗 Maintaining Speed\n");
    }
    else {
        speed += 10;
        printf("⚡ Increasing Speed\n");
    }

    printf("Current Speed: %.2f km/h\n", speed);

    return 0;
}
