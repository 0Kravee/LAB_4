#pragma once
#include <string>

class Employee {
public:
    virtual void work();
    void work(const std::string& task);
    void work(bool isUrgent);
    virtual ~Employee() = default;
};

class Developer : public Employee {
public:
    void work() override;
};

class FrontendDeveloper : public Developer {
public:
    void work() override;
};

class BackendDeveloper : public Developer {
public:
    void work() override;
};

class QAEngineer : public Employee {
public:
    void work() override;
};

class AutomationQAEngineer : public QAEngineer {
public:
    void work() override;
};

class ManualQAEngineer : public QAEngineer {
public:
    void work() override;
};
