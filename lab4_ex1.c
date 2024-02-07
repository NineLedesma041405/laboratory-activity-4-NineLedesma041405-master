#include <stdio.h>
#include <math.h>

float calculate_perimeter(float length, float width) {
    return 2 * (length + width);
}

float calculate_area(float length, float width) {
    return length * width;
}

float calculate_diagonal(float length, float width) {
    return sqrt(length * length + width * width);
}

int main() {
    float length, width;
    int invalid_input_count = 0;
    char choice;

    printf("Enter the length: ");
    scanf("%f", &length);
    printf("Enter the width: ");
    scanf("%f", &width);

    printf("\nMenu:\n");
    printf("a. perimeter\n");
    printf("b. area\n");
    printf("c. diagonal\n");
    printf("d. exit\n");


        while (1) {
            printf("Choose your letter: ");
            scanf("%s", &choice);

                if (choice == 'd') {
                    printf("Have a nice day!\n");
                    break;
                } else if (choice == 'a') {
                    printf("Perimeter: %.3f\n", calculate_perimeter(length, width));
                } else if (choice == 'b') {
                    printf("Area: %.3f\n", calculate_area(length, width));
                } else if (choice == 'c') {
                    printf("Diagonal: %.3f\n", calculate_diagonal(length, width));
                } else {
                    invalid_input_count++;
                }
                    if (invalid_input_count >= 10) {
                        printf("You have exceeded the maximum number of invalid inputs.\n");
                        printf("Have a nice day!\n");
                        break;
                    }
        }

    return 0;
}