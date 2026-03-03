#include<iostream>
using namespace std;

int main() {

    // Variables and Data Types

    int age = 25; // Integer variable 
    double height = 5.9; // Double variable 
    char grade = 'A'; // Character variable 
    bool isStudent = true; // Boolean variable
    string name = "John Doe"; // String variable 

    short shortVar = 10; // Short integer variable 
    long longVar = 1000000; // Long integer variable 
    long long longLongVar = 10000000000; // Long long integer variable  
    unsigned int unsignedVar = 50; // Unsigned integer variable

    long double longDoubleVar = 3.1415926535897932384626433832795; // Long double variable 


    cout << age << endl; // range -2,147,483,648 to 2,147,483,647
    cout << height << endl; // range 1.7E-308 to 1.7E+308
    cout << grade << endl; // range 'A' to 'Z' and 'a' to 'z'
    cout << isStudent << endl; // range true or false
    cout << name << endl; // range depends on the length of the string (in this case, "John Doe" is 8 characters long)
    cout << shortVar << endl; // range -32,768 to 32,767
    cout << longVar << endl; // range -2,147,483,648 to 2,147,483,647
    cout << longLongVar << endl; // range -9,223,372,036,854,775,808 to 9,223,372,036,854,775,807
    cout << unsignedVar << endl; // range 0 to 4,294,967,295
    cout << longDoubleVar << endl; // range 3.4E-4932 to 1.1E+4932 (precision of at least 15 decimal places)


    //  sizeof() is used to determine the size of a variable in bytes
    cout<< sizeof(age) << endl; // size of int is typically 4 bytes
    cout<< sizeof(height) << endl; // size of double is typically 8 bytes
    cout<< sizeof(grade) << endl; // size of char is typically 1 byte
    cout<< sizeof(isStudent) << endl;// size of bool is typically 1 byte
    cout<< sizeof(name) << endl; // size of string is typically 24 bytes (but can vary based on implementation and length of the string)
    cout<< sizeof(shortVar) << endl; // size of short is typically 2 bytes
    cout<< sizeof(longVar) << endl; // size of long is typically 4 bytes on 32-bit systems and 8 bytes on 64-bit systems
    cout<< sizeof(longLongVar) << endl; // size of long long is typically 8 bytes
    cout<< sizeof(unsignedVar) << endl; // size of unsigned int is typically 4 bytes
    cout<< sizeof(longDoubleVar) << endl; // size of long double is typically 16 bytes (but can vary based on implementation)



    return 0;


}