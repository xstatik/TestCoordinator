#include "Coordinator.h"
#include <iostream>
#include <string>

using namespace std;

void Test01();
void Test02();

int main()
{
    Test01();
    Test02();

    return 0;
}

void Test01()//Default constructor
{
    cout << "----------TEST01----------" << endl;

    Coordinator testCoord;
}

void Test02()//Test SetFirstName and GetLastName
{
    cout << "----------TEST02----------" << endl;

    Coordinator testCoord;
    string testStr;

    testCoord.SetFirstName("Greg");
    testCoord.GetFirstName(testStr);

    cout << testStr<< endl;
}
