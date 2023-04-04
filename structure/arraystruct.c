#include <stdio.h>
struct arrayfunction
{
    char name[50];
    int age;
};

// defining and declaring
void display(struct arrayfunction s[10])
{
    int i,n=3;
    printf("student's name\t mark\n ");
    for (i = 1; i <= n; i++)
    {
        printf("%s\t\t %d\n", s[i].name, s[i].age);
    }
}

int main()
{
    struct arrayfunction s[10];

    int i, n;
    printf("Enter the number of student: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        printf("Enter name and age %d: ", i);
        scanf("%s %d", s[i].name, &s[i].age);
    }

    // calling
    display(s);
}


// // C program to demonstrate the
// // usage of an array of structures
// #include <stdio.h>

// // Declaring a structure class
// struct class {
// 	int roll_no;
// 	char grade;
// 	float marks;
// };

// // Function to displays the contents
// // of the array of structures
// void display(struct class class_record[3])
// {
// 	int i, len = 3;

// 	// Display the contents of the array
// 	// of structures here, each element
// 	// of the array is a structure of class
// 	for (i = 0; i < len; i++) {
// 		printf("Roll number : %d\n",
// 			class_record[i].roll_no);
// 		printf("Grade : %c\n",
// 			class_record[i].grade);
// 		printf("Average marks : %.2f\n",
// 			class_record[i].marks);
// 		printf("\n");
// 	}
// }

// // Driver Code
// int main()
// {
// 	// Initialize of an array of structures
// 	struct class class_record[3]
// 		= { { 1, 'A', 89.5f },
// 			{ 2, 'C', 67.5f },
// 			{ 3, 'B', 70.5f } };

// 	// Function Call to display
// 	// the class_record
// 	display(class_record);
// 	return 0;
// }
