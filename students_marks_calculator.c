#include<stdio.h>
int main()
{
    int students , i ,math , english , science , total;
    int passed = 0 , failed = 0;
    float average;
    float class_average = 0;
    float highest = 0;
    float lowest = 100;

    char grade;

    printf("Enter the number of students: ");
    scanf("%d", &students);

    for(i = 1; i <= students; i++)
    {
        printf("Enter marks for student %d:\n", i);
        printf("Math: ");
        scanf("%d", &math);
        printf("English: ");
        scanf("%d", &english);
        printf("Science: ");
        scanf("%d", &science);

        total = math + english + science;
        average = total / 3.0;

        if(average >= 50)
        {
            passed++;
            grade = 'P';
        }
        else
        {
            failed++;
            grade = 'F';
        }

        class_average += average;

        if(average > highest)
        {
            highest = average;
        }

        if(average < lowest)
        {
            lowest = average;
        }

        printf("Total: %d\n", total);
        printf("Average: %.2f\n", average);
        printf("Grade: %c\n", grade);
    }

    class_average /= students;

    printf("Number of students who passed: %d\n", passed);
    printf("Number of students who failed: %d\n", failed);
    printf("Class Average: %.2f\n", class_average);
    printf("Highest Score: %.2f\n", highest);
    printf("Lowest Score: %.2f\n", lowest);

    getchar();
    getchar(); // Wait for user input before closing the console window

    return 0;
}
