#include <iostream>
#include <string>
using namespace std; 


int main() {

    string name;
    int age;
    cout <<"enter your age";
    cin>>age;
    //already keeps var; age
    
    cin.ignore();

    cout <<"your name: ";
    getline(cin,name);

    cout <<"You "<<name<< " have: " <<age<<" years old" <<endl;
    return 0;

}