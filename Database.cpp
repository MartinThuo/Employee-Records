// Database.cpp

#include <iostream>
#include <stdexcept>

#include "Database.h"

using namespace std;

namespace Records {

    Database::Database()
    {
        mNextSlot = 0;
        mNextEmployeeNumber = kFirstEmployeeNumber;
    }

    Database::~Database()
    {
    }

    Employee& Database::addEmployee(string inFirstName, string inLastName)
    {
        if(mNextSlot >= kMaxEmloyees) {
            cerr << "There is no more room to add the new employee!" << endl;
            throw exception();
        }

        Employee& theEmployee =  mEmployees[mNextSlot++];
        theEmployee.setFirstName(inFirstName);
        theEmployee.setLastName(inLastName);
        theEmployee.setEmployeeNumber(mNextEmployeeNumber++);
        theEmployee.hire();

        return theEmployee;
    }
}