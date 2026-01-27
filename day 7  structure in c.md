*1) #include <stdio.h>*

*struct structure* 

*{*

    *int reg;*

    *char section;*

    *float cgpa;*

*};*





*int main() {*

    

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

*}*

###### *output*

    *The reg no is:1* 

*The section is:b* 

*The cgpa  is:8.900000* 

*reg no of second student :2* 





*=== Code Execution Successful =*



###### *problem 1: student mark record system* 

###### *real time scenario: a college wants to store and display student academic details like roll number, name, and marks.*

*#include <stdio.h>*

*#include <string.h>*

*struct structure* 

*{*

    *int rollnumber;*

    *int mark;*

    *char name\[10];*

*};*





*int main() {*

    

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

*}*

###### *output*

*The rollnumber is:1* 

*TThe mark is:89* 

*The name is: indhuja* 





*=== Code Execution Successful ===*

###### 

###### *problem 2: employee salary management*

###### *statement: create a structure to store employee ID and salary*

*#include <stdio.h>*

*#include<string.h>*



*struct student{*

    *int Id;*

    *float salary;*

    

*};*

*int main() {*

    *struct student emp\[3];*

    *printf("---Employee Details---\\n");*

   *int i;*

   *for(i=0;i<3;i++){*

       

   *printf("Employee %d:\\n",i+1);*

   *printf("Employee Id:\\n");*

   *scanf("%d",\&emp\[i].Id);*

   *printf("Salary:\\n");*

   *scanf("%f",\&emp\[i].salary);*

   *}*

   *printf("---Employee Details---\\n");*

   *for(i=0;i<3;i++){*

    *printf("Employee %d\\n",i+1);* 

    *printf("Employee Id: %d\\n",emp\[i].Id);*

    *printf("salary: %.2f\\n",emp\[i].salary);*

   *}*

    

    *return 0;*

*}*

###### *OUTPUT*

*---Employee Details---*

*Employee 1:*

*Employee Id:*

*2029*

*Salary:*

*100000*

*Employee 2:*

*Employee Id:*

*2030*

*Salary:*

*200000*

*Employee 3:*

*Employee Id:*

*2040*

*Salary:*

*300000*

*---Employee Details---*

*Employee 1*

*Employee Id: 2029*

*salary: 100000.00*

*Employee 2*

*Employee Id: 2030*

*salary: 200000.00*

*Employee 3*

*Employee Id: 2040*

*salary: 300000.00*





*=== Code Execution Successful ===*



###### *problem 3: mobile recharge history(telecom app)*

###### *create a structure to store mobile number and recgarge amount. store and display one recgarge record.*



*#include<stdio.h>*



*struct structure{*

    

   *long int number;*

    *float recharge;*

    

*};*

*int main(){*

*struct structure stru1;*



 *stru1.number = 1234567890;*

 *stru1.recharge = 500.00;*

 

 *printf("Number :%ld\\n",stru1.number);*

 *printf("Recharge :%.2f\\n",stru1.recharge);*

 

 *return 0;*

*}*

######  *output*

 *Number :1234567890*

*Recharge :500.00*

###### 

###### *2) nested if*



*#include <stdio.h>*

*struct student {*

    *char firstname\[20];*

    *char lastname\[20];*

*};*

*struct details {*

    *char dept \[20];*

    *int year;*

    *struct student name;*

*};*

*int main(){*

    *struct student stdname = {"indhuja","krishnakumar"};*

    *struct details std1 = {"ECE",2025,stdname};*

    *printf("My name is %s %s from the department %s, completed in the year of %d", std1.name.firstname, std1.name.lastname,std1.dept, std1.year);*

    *return 0;*

*}*

###### *output*

*My name is indhuja Krishnakumar from the department ECE, completed in the year of 2025*



*=== Code Execution Successful ===*



###### *3)Nested structure*

*#include<stdio.h>*

*struct student {*

    *char name\[20];*

    *int regno;*

*};*

*int main() {*

    *struct student std1 = {"indhu",1021};*

    *struct student \*point = \&std1;*

    

   

    *printf("My name is %s \\n",point ->name);*

    *printf("My name's memory address is %p \\n",point ->name);*

    

    *printf("My reg no is %d \\n",point ->regno);*

    *printf("My regno's memory address is %p \\n",point ->regno);*

    

    *return 0;*

*}*

###### *output*

*My name is indhu* 

*My name's memory address is 0x7ffc35e17570* 

*My reg no is 1021* 

*My regno's memory address is 0x3fd* 





*=== Code Execution Successful ===*



###### *problem 4:*

###### *student address management system*

*#include<stdio.h>*

*struct Address {*

    *char city\[20];*

    *int pincode;*

*};*

*struct student{*

    *int id;*

    *char name\[30];*

    *struct Address addr;*

*};*

*int main() {*

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

*}*

###### *output*

*Enter student ID:101*

*Enter student Name:indhu*

*Enter city:kangeyam*

*Enter pincode:638701*



*--- student Details ---*

*ID: 101*

*Name:* 

*City:kangeyam*

*Pincode: 638701*





*=== Code Execution Success*

