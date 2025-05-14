#include "Employee.h"
#include <iostream>

int main() {
    std::cout << "--- Перевизначення work() через віртуальні методи ---\n";
    Employee* dev = new BackendDeveloper();
    dev->work();  // Поліморфізм

    std::cout << "\n--- Перевантаження work() ---\n";
    Employee general;
    general.work();
    general.work(std::string("Fix server"));
    general.work(true);
    general.work(false);

    std::cout << "\n--- Масив працівників ---\n";
    Employee* staff[] = {
        new FrontendDeveloper(),
        new BackendDeveloper(),
        new AutomationQAEngineer(),
        new ManualQAEngineer()
    };

    for (int i = 0; i < 4; ++i) {
        staff[i]->work();  // Поліморфізм
    }

    std::cout << "\n--- Звільнення пам’яті ---\n";
    for (int i = 0; i < 4; ++i) {
        delete staff[i];  // Віртуальні деструктори працюють
    }

    delete dev;

    return 0;
}
