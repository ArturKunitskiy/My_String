#include <iostream>
#include "My_String.h"
using namespace std;

int main()
{
    MyString obj1("Artur");
    obj1.Print();
    cout << obj1.MyChr('r') << endl;

    MyString obj2(obj1);
    obj2.Print();

    obj2.Input();
    obj2.Print();

    cout << obj1.MyStrCmp(obj2) << endl;

    obj1.MyStrcpy(obj2);
    obj1.Print();

    MyString obj3("Kunitskyi");
    obj2.MyStrCat(obj3);
    obj2.Print();

    obj3.MyDelChr('u');
    obj3.Print();

    cout << obj3.MyStrStr("u") << endl;
    MyString::Amount();

    cout << obj3[7] << endl;
}