#include "Employee.h"
#include <iostream>

void Employee::work() {
    std::cout << "Employee is working." << std::endl;
}

void Employee::work(const std::string& task) {
    std::cout << "Employee is working on task: " << task << std::endl;
}

void Employee::work(bool isUrgent) {
    if (isUrgent) {
        std::cout << "Employee is urgently working!" << std::endl;
    } else {
        std::cout << "Employee is working at a normal pace." << std::endl;
    }
}

// Developer methods
void Developer::work() {
    std::cout << "Developer is writing code." << std::endl;
}

void FrontendDeveloper::work() {
    std::cout << "Frontend Developer is building user interfaces." << std::endl;
}

void BackendDeveloper::work() {
    std::cout << "Backend Developer is creating server-side logic." << std::endl;
}

// QA Engineer methods
void QAEngineer::work() {
    std::cout << "QA Engineer is testing software." << std::endl;
}

void AutomationQAEngineer::work() {
    std::cout << "Automation QA Engineer is writing test scripts." << std::endl;
}

void ManualQAEngineer::work() {
    std::cout << "Manual QA Engineer is executing manual test cases." << std::endl;
}
