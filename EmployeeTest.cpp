// EmployeeTest.cpp

#include <iostream>

#include "Employee.h"

using namespace std;
using namespace Records;

int main(int argc, char** argv)
{
    cout << "Testing the Employee class." << endl;

    Employee emp;

    emp.setFirstName("Martin");
    emp.setLastName("Thuo");
    emp.setEmployeeNumber(27);
    emp.setSalary(500000);
    emp.promote();
    emp.promote(50);
    emp.hire();
    emp.display();

    return 0;
}