#include<stdio.h>
#include<string.h>
#define MAX_LEN 100

void addStudent(FILE *file)
{
    printf("\n");

    char name[MAX_LEN];
    printf("student name: ");
    scanf("%s", name);
    char branch[MAX_LEN];
    printf("student branch: ");
    scanf("%s", branch);
    char roll[MAX_LEN];
    printf("student roll number : ");
    scanf("%s", roll);
    fprintf(file, "%s,%s,%s\n", name, branch, roll);
}

void removeStudent(FILE *file)
{
    char name[MAX_LEN];
    printf("student name to remove: ");
    scanf("%s", name);
    char branch[MAX_LEN];
    printf("student branch to remove: ");
    scanf("%s", branch);
    char roll[MAX_LEN];
    printf("student roll number to remove: ");
    scanf("%s", roll);

    FILE *temp = fopen("temp.csv", "w");
    char line[1024];

    rewind(file);

    while (fgets(line, sizeof(line), file))
    {
        char n[MAX_LEN], b[MAX_LEN], r[MAX_LEN];
        sscanf(line, "%[^,],%[^,],%[^\n]\n", n, b, r);

        if (strcmp(n, name) != 0 || strcmp(b, branch) != 0 || strcmp(r, roll) != 0)
        {
            fprintf(temp, "%s", line);
        }
    }

    fclose(temp);
    fclose(file);
    remove("student1.csv");
    rename("temp.csv", "student1.csv");
}

int main()
{
    int a = 1;
    while (a == 1)
    {
        int choice;
        printf("\n1. Add student\n2. Remove student\n3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        FILE *file = fopen("student1.csv", "a+");
        if (file == NULL)
        {
            file = fopen("student1.csv", "w");
        }

        switch (choice)
        {
        case 1:
            addStudent(file);
            break;
        case 2:
            removeStudent(file);
            break;
        case 3:
            a = 0;
            break;
        default:
            printf("Invalid choice\n");
            break;
        }

        fclose(file);
    }

    return 0;
}