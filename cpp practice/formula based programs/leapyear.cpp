#include<iostream>
using namespace std;

int main()
{
    int year;
    cout << "Enter a year" << endl;
    cin >> year;

    if( year % 4 == 0){
        cout << "Leap year" << endl;
    }else{
        cout << "Not a Leap year" << endl;
    }
    return 0;
}