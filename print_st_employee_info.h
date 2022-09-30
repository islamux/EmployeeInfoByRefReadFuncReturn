#include <iostream>
using namespace std;

#include "read_st_employee_info_by_ref.h"
#include "print_stars_with_text.h"

void PrintStEmployeeInfo(string msgBefor, stEmployeeInfo readStEmpInfo, string msgAfter){

    cout << readStEmpInfo.firstName<< "\nl";
    PrintStarsWithText("lenghOf Text");

    cout << readStEmpInfo.secondName << "\nl";
    PrintStarsWithText("lenghOf Text");

    cout << readStEmpInfo.lastName << "\n";
    PrintStarsWithText("lenghOf Text");
    
    cout << readStEmpInfo.age << "\n";
    PrintStarsWithText("lenghOf Text");

    cout << readStEmpInfo.phone << endl;
    PrintStarsWithText("lenghOf Text");


}