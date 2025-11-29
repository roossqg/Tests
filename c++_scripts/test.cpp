
#include <iostream>
#include <vector>
#include <string>

int main()
{
    int a=5;
    int b=78;

    int sum=a+b;
    int diff=a-b;


    int dv= a/b;
    int fldv= float(a) / float(b);

    int e= a++;
    int u= ++a; //add after returns

    std:: cout <<a; // modify the object : a
    return 0;
}