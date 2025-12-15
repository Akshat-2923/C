#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function to calculate BMI
float calculate_bmi(float weight, float height_m) {
    return weight / (height_m * height_m);
}

// Function to print BMI category with color
void print_category(float bmi) {
    if (bmi < 18.5)
        printf("\033[1;34mCategory: Underweight\033[0m\n");
    else if (bmi < 24.9)
        printf("\033[1;32mCategory: Normal weight\033[0m\n");
    else if (bmi < 29.9)
        printf("\033[1;33mCategory: Overweight\033[0m\n");
    else
        printf("\033[1;31mCategory: Obese\033[0m\n");
}

// Function to save history
void save_history(const char *name, int age, char gender, float bmi) {
    FILE *f = fopen("bmi_history.txt", "a");
    if (f == NULL) {
        printf("Error opening file!\n");
        return;
    }
    fprintf(f, "Name: %s | Age: %d | Gender: %c | BMI: %.2f\n", name, age, gender, bmi);
    fclose(f);
}

// Function to show history
void show_history() {
    FILE *f = fopen("bmi_history.txt", "r");
    char line[200];
    if (f == NULL) {
        printf("No history found!\n");
        return;
    }
    printf("\n--- BMI History ---\n");
    while (fgets(line, sizeof(line), f)) {
        printf("%s", line);
    }
    fclose(f);
}

int main() {
    int choice;
    do {
        printf("\n=== Advanced BMI Calculator ===\n");
        printf("1. Calculate BMI\n");
        printf("2. Show BMI History\n");
        printf("3. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            char name[50], gender;
            int age;
            float weight, height, bmi;
            int unit_choice;

            printf("Enter your name: ");
            scanf("%s", name);
            printf("Enter age: ");
            scanf("%d", &age);
            printf("Enter gender (M/F/O): ");
            scanf(" %c", &gender);

            printf("\nChoose units:\n1. kg/cm\n2. lbs/inch\nEnter choice: ");
            scanf("%d", &unit_choice);

            if (unit_choice == 1) {
                printf("Enter weight (kg): ");
                scanf("%f", &weight);
                printf("Enter height (cm): ");
                scanf("%f", &height);
                height = height / 100.0; // convert cm to m
            } else {
                printf("Enter weight (lbs): ");
                scanf("%f", &weight);
                printf("Enter height (inches): ");
                scanf("%f", &height);
                weight = weight * 0.453592; // lbs to kg
                height = height * 0.0254;   // inches to m
            }

            bmi = calculate_bmi(weight, height);
            printf("\n%s, your BMI is: %.2f\n", name, bmi);
            print_category(bmi);

            float min_w = 18.5 * (height * height);
            float max_w = 24.9 * (height * height);
            printf("Healthy Weight Range: %.1f kg - %.1f kg\n", min_w, max_w);

            // Save to history
            save_history(name, age, gender, bmi);
        }
        else if (choice == 2) {
            show_history();
        }
        else if (choice == 3) {
            printf("Exiting... Stay Healthy!\n");
        }
        else {
            printf("Invalid choice!\n");
        }
    } while (choice != 3);

    return 0;
}
