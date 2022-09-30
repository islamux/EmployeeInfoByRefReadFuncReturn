#include <iostream> 
using namespace std;

#include "st_employee_info.h"

stEmployeeInfo ReadStEmployeeInfoByRef(stEmployeeInfo  &stInfo){


    cout << "Enter your first name: ";
    cin >> stInfo.firstName;

    cout << "Enter your second name: ";
    cin >> stInfo.secondName;

    cout << "Enter your last name: ";
    cin >> stInfo.lastName;

    cout << "Enter your age: ";
    cin >> stInfo.age;

    cout << "Enter your phone: ";
    cin >> stInfo.phone;

    return stInfo;

}