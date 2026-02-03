1) #include <stdio.h>
struct structure
{
    *int reg;*

    *char section;*

    *float cgpa;*

};


int main() {

    *struct structure  stru1;*

    *struct structure  student2;*

    *stru1.reg=0001;*

    *stru1.section='b';*

    *stru1.cgpa = 8.9;*

    

    *student2 .reg = 0002;*

    *printf("The reg no is:%d \\n",stru1.reg);*

        *printf("The section is:%c \\n",stru1.section);*

            *printf("The cgpa  is:%f \\n",stru1.cgpa);*

            

                *printf("reg no of second student :%d \\n",student2.reg);*

                *return 0;*

}
output
    *The reg no is:1* 

The section is:b
The cgpa  is:8.900000
reg no of second student :2


=== Code Execution Successful =

problem 1: student mark record system
real time scenario: a college wants to store and display student academic details like roll number, name, and marks.
#include <stdio.h>
#include <string.h>
struct structure
{
    *int rollnumber;*

    *int mark;*

    *char name\[10];*

};


int main() {

    *struct structure  stru1;*

    *struct structure  student2;*

    *stru1.rollnumber=0001;*

        *stru1.mark=89;*

    *strcpy(stru1.name,"indhuja");*

    

    *student2 .rollnumber = 0002;*

    *printf("The rollnumber is:%d \\n",stru1.rollnumber);*

                    *printf("The mark is:%d \\n",stru1.mark);*

            *printf("The name is: %s \\n",stru1.name);*

            

                

                *return 0;*

}
output
The rollnumber is:1
TThe mark is:89
The name is: indhuja


=== Code Execution Successful ===

problem 2: employee salary management
statement: create a structure to store employee ID and salary
#include <stdio.h>
#include<string.h>

struct student{
    *int Id;*

    *float salary;*

    


};
int main() {
    *struct student emp\[3];*

    *printf("---Employee Details---\\n");*

int i;
for(i=0;i<3;i++){

printf("Employee %d:\n",i+1);
printf("Employee Id:\n");
scanf("%d",&emp[i].Id);
printf("Salary:\n");
scanf("%f",&emp[i].salary);
}
printf("---Employee Details---\n");
for(i=0;i<3;i++){
    *printf("Employee %d\\n",i+1);* 

    *printf("Employee Id: %d\\n",emp\[i].Id);*

    *printf("salary: %.2f\\n",emp\[i].salary);*

}

    *return 0;*

}
OUTPUT
---Employee Details---
Employee 1:
Employee Id:
2029
Salary:
100000
Employee 2:
Employee Id:
2030
Salary:
200000
Employee 3:
Employee Id:
2040
Salary:
300000
---Employee Details---
Employee 1
Employee Id: 2029
salary: 100000.00
Employee 2
Employee Id: 2030
salary: 200000.00
Employee 3
Employee Id: 2040
salary: 300000.00


=== Code Execution Successful ===

problem 3: mobile recharge history(telecom app)
create a structure to store mobile number and recgarge amount. store and display one recgarge record.

#include<stdio.h>

struct structure{

long int number;
    *float recharge;*

    


};
int main(){
struct structure stru1;

stru1.number = 1234567890;
stru1.recharge = 500.00;

printf("Number :%ld\n",stru1.number);
printf("Recharge :%.2f\n",stru1.recharge);

return 0;
}
output
Number :1234567890
Recharge :500.00

2) nested if

#include <stdio.h>
struct student {
    *char firstname\[20];*

    *char lastname\[20];*

};
struct details {
    *char dept \[20];*

    *int year;*

    *struct student name;*

};
int main(){
    *struct student stdname = {"indhuja","krishnakumar"};*

    *struct details std1 = {"ECE",2025,stdname};*

    *printf("My name is %s %s from the department %s, completed in the year of %d", std1.name.firstname, std1.name.lastname,std1.dept, std1.year);*

    *return 0;*

}
output
My name is indhuja Krishnakumar from the department ECE, completed in the year of 2025

=== Code Execution Successful ===

3)Nested structure
#include<stdio.h>
struct student {
    *char name\[20];*

    *int regno;*

};
int main() {
    *struct student std1 = {"indhu",1021};*

    *struct student \*point = \&std1;*

    

   

    *printf("My name is %s \\n",point ->name);*

    *printf("My name's memory address is %p \\n",point ->name);*

    

    *printf("My reg no is %d \\n",point ->regno);*

    *printf("My regno's memory address is %p \\n",point ->regno);*

    

    *return 0;*

}
output
My name is indhu
My name's memory address is 0x7ffc35e17570
My reg no is 1021
My regno's memory address is 0x3fd


=== Code Execution Successful ===

problem 4:
student address management system
#include<stdio.h>
struct Address {
    *char city\[20];*

    *int pincode;*

};
struct student{
    *int id;*

    *char name\[30];*

    *struct Address addr;*

};
int main() {
    *struct student s1;*

    *struct student \*ptr;*

    *ptr = \&s1;*

    

   

    *printf("Enter student ID:");*

    *scanf("%d", \&ptr->id);*

    

    *printf("Enter student Name:");*

    *scanf("%s",ptr->addr.city);*

    *printf("Enter city:");*

    *scanf("%s",ptr->addr.city);*

    

    *printf("Enter pincode:");*

    *scanf("%d",\&ptr->addr.pincode);*

    *printf("\\n--- student Details ---\\n");*

    *printf("ID: %d\\n",ptr->id);*

    *printf("Name: %s\\n",ptr->name);*

    *printf("City:%s\\n",ptr->addr.city);*

    *printf("Pincode: %d\\n",ptr->addr.pincode);*

    *return 0;*

}
output
Enter student ID:101
Enter student Name:indhu
Enter city:kangeyam
Enter pincode:638701

--- student Details ---
ID: 101
Name:
City:kangeyam
Pincode: 638701


=== Code Execution Success

2)
#include <stdio.h>
struct Department {
int dept_id;
char dept_name[30];
};
struct Employee {
int emp_id;
char emp_name[30];
struct Department dept;
};
int main() {
struct Employee emp;  
struct Employee *ptr = &emp;  
printf("Enter Employee ID: ");
scanf("%d", &ptr->emp_id);
    printf("Enter Employee Name: ");
    scanf("%s", ptr->emp_name);

    printf("Enter Department ID: ");
    scanf("%d", &ptr->dept.dept_id);

    printf("Enter Department Name: ");
    scanf("%s", ptr->dept.dept_name);
    printf("\n--- Employee Details ---\n");
    printf("Employee ID   : %d\n", ptr->emp_id);
    printf("Employee Name : %s\n", ptr->emp_name);
    printf("Department ID : %d\n", ptr->dept.dept_id);
    printf("Department Name: %s\n", ptr->dept.dept_name);

    return 0;
}
output
Enter Employee ID: 101
Enter Employee Name: indhu
Enter Department ID: 234
Enter Department Name: ece

--- Employee Details ---
Employee ID   : 101
Employee Name : indhu
Department ID : 234
Department Name: ece


=== Code Execution Successful ===

3)
#include <stdio.h>
#include <stdlib.h>
struct Supplier {
    char name[30];
    char location[30];
};
struct Product {
    int id;
    char name[30];
    float price;
    struct Supplier sup;
};

int main() {
    struct Product *p;
    p = (struct Product *)malloc(sizeof(struct Product));
    if (p == NULL) {
        printf("Memory allocation failed");
        return 1;
    }

    
    printf("Enter Product ID: ");
    scanf("%d", &p->id);

    printf("Enter Product Name: ");
    scanf("%s", p->name);

    printf("Enter Product Price: ");
    scanf("%f", &p->price);

    printf("Enter Supplier Name: ");
    scanf("%s", p->sup.name);

    printf("Enter Supplier Location: ");
    scanf("%s", p->sup.location);

    printf("\n--- Product Details ---\n");
    printf("Product ID: %d\n", p->id);
    printf("Product Name: %s\n", p->name);
    printf("Product Price: %.2f\n", p->price);
    printf("Supplier Name: %s\n", p->sup.name);
    printf("Supplier Location: %s\n", p->sup.location);

   
    free(p);

    return 0;
}

output
Enter Product ID: 201
Enter Product Name: laptop
Enter Product Price: 63000
Enter Supplier Name: hp
Enter Supplier Location: kerela

--- Product Details ---
Product ID: 201
Product Name: laptop
Product Price: 63000.00
Supplier Name: hp
Supplier Location: kerela


=== Code Execution Successful ===