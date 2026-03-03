#include<iostream> // '#include' is a preprocessor directive that tells the compiler to include the contents of the iostream header file, which allows us to use input and output streams in our program.
#include<string>
using namespace std; // 'using namespace std;' allows us to use all the entities in the 'std' namespace without having to prefix them with 'std::'.

int main() {

    cout<<"Hello World!";
    string name;
    int age;
    cout<<"\nEnter your name: ";
    getline(cin, name); // if there's a cin used before getline then we have to use 'cin.ignore()' before getline to ignore the newline character left in the input buffer by the previous cin.
    cout<<"\nEnter your age: ";
    cin>>age;
    cout<<"Hello "<<name<<" ! your age is: "<<age<<endl;


    return 0;
}