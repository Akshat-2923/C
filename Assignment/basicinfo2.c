#include <stdio.h>

int main(void) {
    char name[50], dept[40], city[40];
    int age;

    printf("Enter name: ");
    fgets(name, sizeof(name), stdin);
    printf("Enter age: ");
    scanf("%d", &age);
    getchar(); 
    printf("Enter department: ");
    fgets(dept, sizeof(dept), stdin);
    printf("Enter city: ");
    fgets(city, sizeof(city), stdin);

    printf("\n---- Student Profile ----\n");
    printf("Name       : %s", name);
    printf("Age        : %d\n", age);
    printf("Department : %s", dept);
    printf("City       : %s", city);
    return 0;
}
