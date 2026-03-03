#include<iostream>
using namespace std;

int main() {
    // int budget;
    // cout<<"Enter your budget: ";
    // cin>>budget;

    // // if-else block to check if the budget is sufficient to buy maggie (assuming maggie costs 10)
    // if(budget >= 10){
    //     cout<<"You can buy maggie"<<endl;
    // }
    // else{
    //     cout<<"You cannot buy maggie"<<endl;
    // }

    // int marks;
    // cout<<"Enter your marks: ";
    // cin>>marks;

    // //if- else if -else block 

    // if(marks>90){
    //     cout<<"Grade A"<<endl;
    // }
    // else if(marks>80){
    //     cout<<"Grade B"<<endl;
    // }
    // else if(marks>70){
    //     cout<<"Grade C"<<endl;
    // }
    // else if(marks>60){
    //     cout<<"Grade D"<<endl;
    // }
    // else{
    //     cout<<"Grade F"<<endl;
    // }

    // Nested if-else block

    // int height;
    // int weight;
    // cin>>height;
    // cin>>weight;

    // if(height>170){
    //     if(weight>70){
    //         cout<<"You are tall and heavy"<<endl;
    //     }
    //     else{
    //         cout<<"You are tall and light"<<endl;
    //     }
    // }
    // else{
    //     if(weight>70){
    //         cout<<"You are short and heavy"<<endl;
    //     }
    //     else{
    //         cout<<"You are short and light"<<endl;
    //     }
    // }


    // Switch Case Block

    // char grade;
    
    // cout<<"Enter your grade: ";
    // cin>>grade;

    // grade = toupper(grade); // Convert the input grade to uppercase to handle both uppercase and lowercase inputs

    // switch(grade){
    //     case 'A':
    //         cout<<"Excellent"<<endl;
    //         break;
    //     case 'B':
    //        cout<<"Good"<<endl;
    //         break;
    //     case 'C':
    //         cout<<"Average"<<endl;
    //         break;
    //     case 'D':
    //         cout<<"Below Average"<<endl;
    //         break;
    //     case 'F':
    //         cout<<"Fail"<<endl;
    //         break;
    //     default:
    //         cout<<"Invalid grade"<<endl;    

    // }

    // int day;
    // cout<<"Enter the day of the week (1-7): ";
    // cin>>day;

    // switch(day){
    //     case 1:
    //      cout<<"Monday"<<endl;
    //      break;
    //     case 2:
    //      cout<<"Tuesday"<<endl;
    //      break;
    //     case 3:
    //         cout<<"Wednesday"<<endl;
    //         break;
    //     case 4:
    //         cout<<"Thursday"<<endl;
    //         break;
    //     case 5:
    //         cout<<"Friday"<<endl;
    //         break;
    //     case 6:
    //         cout<<"Saturday"<<endl;
    //         break;
    //     case 7:

    //         cout<<"Sunday"<<endl;
    //         break;

    //     default:
    //         cout<<"Invalid day"<<endl;
    // }


    // Ternary Operator

    int num1 =10;
    int num2 =20;

    int maxnum = (num1 > num2) ? num1 : num2; // if num1 is greater than num2, maxnum will be assigned the value of num1, otherwise it will be assigned the value of num2

    cout<<"The maximum number is: "<<maxnum<<endl;
    
    return 0;
}