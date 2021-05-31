#include <iostream>

using namespace std;

int main()
{
    int age;
    cout << "Enter your Age " << endl;
    cin >> age;
    if(age>18)
    {
        cout <<"You are eligible to VOTE";
    }
    else
    {
         cout <<"You are not eligible to VOTE\n" ;
    }
    return 0;
}
