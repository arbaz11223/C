#include <stdio.h>
#include <string.h>

typedef struct student {
    int std, roll;
    float cgpa;
    char name[100];
}stu;

int main() {
/*--------------------1st Student--------------------------*/
    struct student s1;

    s1.cgpa = 5.56;
    s1.roll = 1789;
    s1.std = 1;
    strcpy(s1.name, "Anil Chaudhary");

    printf("Student Number : ", s1.std);
    printf("\nStudent Name : %s\n", s1.name);
    printf("Student Roll Number : %d\n", s1.roll);
    printf("Stduent CGPA : %f\n", s1.std);

/*--------------------2nd Student--------------------------*/

    struct student s2;
    s2.cgpa = 7.45;
    s2.roll = 566;
    s2.std = 2;
    strcpy(s2.name, "Mayank Rawat");

    printf("\nStudent Number : %d \n",s2.std);
    printf("Student Name : %s\n",s2.name);
    printf("Student Roll Number : %d\n",s2.roll);
    printf("Student CGPA : %f\n",s2.cgpa);

/*--------3rd Student in Single Line {with Array}---------*/

    struct student s3 = {3, 545, 7.67, "Raj Kumar"};
    

    printf("\nStudent Number : %d\n", s3.std);
    printf("Student Name : %s\n",s3.name);
    printf("Student Roll Number : %d \n",s3.roll);
    printf("Student CGPA : %f\n",s3.cgpa);

/*--------4rd Student with (Typedef)---------*/

    stu s4 = {4, 555, 8.90, "Ramesh Chandra"};

    printf("\nStudent Number : %d\n", s3.std);
    printf("Student Name : %s\n",s3.name);
    printf("Student Roll Number : %d \n",s3.roll);
    printf("Student CGPA : %f\n",s3.cgpa);

    return 0;
}