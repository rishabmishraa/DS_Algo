#include<iostream>
using namespace std;

int main(){

    // int max = INT_MAX + 1; it will give overflowed value;
    // cout<<max; will give -2147483648;


    // Unary Operators

    // int a = 10;
    // cout<<a++<<endl; // Post Increment // output: 10, a becomes 11
    // cout<<++a<<endl; // Pre Increment // output: 12, a becomes 12
    // cout<<a--<<endl; // Post Decrement // output: 12, a becomes 11
    // cout<<--a<<endl; // Pre Decrement // output: 10, a becomes 10
    // ** cout<<(a++)*(++a); // need to know the order of evaluation;

    // Arithmetic Operators

    // int num1 = 10;
    // int num2 = 20;

    // int addition = num1 + num2; // addition operator
    // int subtraction = num1 - num2; // subtraction operator
    // int multiplication = num1 * num2; // multiplication operator
    // int division = num1 / num2; // division operator
    // int modulus = num1 % num2; // modulus operator

    // Assignment Operators

    // int x = 10; // assignment operator
    // x += 5; // addition assignment operator, equivalent to x = x + 5
    // x -= 3; // subtraction assignment operator, equivalent to x = x - 3
    // x *= 2; // multiplication assignment operator, equivalent to x = x * 2
    // x /= 4; // division assignment operator, equivalent to x = x / 4
    // x %= 3; // modulus assignment operator, equivalent to x = x % 3

    // Comparison Operators

    // int a = 10;
    // int b = 20;

    // bool isEqual = (a == b); // equality operator
    // bool isNotEqual = (a != b); // inequality operator

    // bool isGreater = (a > b); // greater than operator
    // bool isLess = (a < b); // less than operator
    // bool isGreaterOrEqual = (a >= b); // greater than or equal to operator
    // bool isLessOrEqual = (a <= b); // less than or equal to operator


    //  And Operator = 0 && 0 = 0
    //                 0 && 1 = 0
    //                 1 && 0 = 0
    //                 1 && 1 = 1

    //  Or Operator = 0 || 0 = 0
    //                0 || 1 = 1
    //                1 || 0 = 1
    //                1 || 1 = 1

    // Not Operator = !0 = 1
    //                !1 = 0

    //Logical Operators

    // && -> Logical AND operator
    // || -> Logical OR operator
    // ! -> Logical NOT operator

    // int a = 10;
    // int b = 20;

    // bool andResult = (a > 5) && (b < 30); // logical AND operator 
    // bool orResult = (a < 5) || (b < 30); // logical OR operator
    // bool notResult = !(a > 5); // logical NOT operator


    // Bitwise Operations;

    // & -> Bitwise AND operator
    // | -> Bitwise OR operator
    // ^ -> Bitwise XOR operator
    // ~ -> Bitwise NOT operator

    // 10<<1 = 20(Left Shift by 1);
    // 10>>1 = 5  (Right Shift by 1);

    // Bit masking;

    // set a perticular bit
    // int n;
    // cin>>n;
    // int pos;
    // cin>>pos;
    // int mask = 1<<pos; // Bit Masking
    // int newn = n | mask; 
    // int newn2 = n & (~mask); // to clear a bit;
    //int newn3 = n ^ mask; // to toggle a bit;
    // cout<<newn<<endl;
    // cout<<newn2<<endl;
    // cout<<newn3<<endl;

    
    return 0;
}
