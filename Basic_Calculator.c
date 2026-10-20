//# First-C-Program-Simple-calculator. //                                                                                                             Date-18-10-2026
//My first C programming project: A console-based simple calculator with basic arithmetic validation.//
#include<stdio.h>
int main(){
    int choice;
    float Value_of_number1,Value_of_number2;
    printf("#Simple calculator menu\n");
    printf("Please enter your choice from the given options :\nOption 1.Addition.\nOption 2.Subtraction.\nOption 3.Multiplication.\nOption 4.Division.\n");;
    scanf("%d",&choice);             //Note:Please enter the correct numerical choice//
    printf("Enter the value of number 1 and value of number 2 :");
    scanf("%f%f",&Value_of_number1,&Value_of_number2);
    switch (choice){
case 1:printf("result=%0.2f\n",Value_of_number1+Value_of_number2);
break;
case 2:printf("result=%0.2f\n",Value_of_number1-Value_of_number2);
break;
case 3:printf("result=%0.2f\n",Value_of_number1*Value_of_number2);
break;
case 4:if(Value_of_number2 !=0 )
{printf("result=%0.2f\n",Value_of_number1/Value_of_number2);}
else
{printf("The Division is Invalid");}
break;
default:
printf("The chosen choice is invalid");
}
return 0;
}
