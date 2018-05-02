#include "Coordinator.h"
#include <iostream>
#include <string>

using namespace std;

void Test01();
void Test02();
void Test03();

int main()
{
    Test01();
    Test02();
    Test03();

    return 0;
}

void Test01()//Default constructor
{
    cout << "----------TEST01----------" << endl;

    Coordinator testCoord;
}

void Test02()//Test SetFirstName and GetFirstName
{
    cout << "----------TEST02----------" << endl;

    Coordinator testCoord;
    string testStr;

    testCoord.SetFirstName("Greg");
    testCoord.GetFirstName(testStr);

    cout << testStr<< endl;
}

void Test03()//Test SetLastName and GetLastName
{
    cout << "----------TEST03----------" << endl;

    Coordinator testCoord;
    string testStr;

    testCoord.SetLastName("the Bunny");
    testCoord.GetLastName(testStr);

    cout << testStr<< endl;
}
