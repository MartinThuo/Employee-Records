// Emplyoyee.cpp

#include <iostream>

#include "Employee.h"

using namespace std;

// Implementations for the Employee class methods
namespace Records {
    Employee::Employee()
    {
        mFirstName = "";
        mLastName = "";
        mEmployeeNumber = -1;
        mSalary = kDefaultStartingSalary;
        fHired = false;
    }
}