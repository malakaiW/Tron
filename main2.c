#include <stdio.h>


int main() {

    int age = 0;
    float gpa = 0.0f;
    char grade = '\0';
    char name[30] = "";

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("your age is %d, ", age);

    printf("what is your grade: ");
    scanf(" %c", &grade);

    printf("ur grade is: %c\n", grade);

    getchar();
    printf("Enter name: ");
    fgets(name, sizeof(name), stdin);
    
    printf("%s", name);



    return 0;
}