#include <stdio.h>

int main() {
    FILE *file = fopen("example.txt", "r");  // Open file for reading

    if (file == NULL) {
        perror("Error opening file");
        return 1;
    }

    char name[50];
    int age;

    // Read data from the file using fscanf
    while (fscanf(file, "%s %d", name, &age) == 2) {
        printf("Name: %s, Age: %d\n", name, age);
    }

    // Close the file
    fclose(file);

    return 0;
}
