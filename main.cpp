#include <iostream>
using namespace std;

// Reading 
//#include "read_st_employee_info.h" == > included in  "print_st_employee_info.h"

// Printing
#include "print_st_employee_info.h"

/*
    * Take info from user using struct and calling by ref.

    # Steps
        * Struct stEmployeeInfo 
        * ReadstEmployeeInfo(){};
        * PrintstEmployeeInfo(){};
*/

int main(){

    // Reading : to save function in main without using by ref : Make a variable for reading function to save.
      // stEmployeeInfo empInfo =  ReadStEmployeeInfo();

    // Reading Function by Ref ==> make a one Variable and (not void) Reading func  by ref  , and void Printing func.
    
    // Make instance from stEmployeeInfo struct (class)
    stEmployeeInfo empInfo;

    // Reading
    stEmployeeInfo stEmployeeInfoReaded =  ReadStEmployeeInfoByRef(empInfo);

    // Printing
    PrintStEmployeeInfo("", stEmployeeInfoReaded,"");


    return 0;
}