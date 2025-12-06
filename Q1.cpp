#include <iostream>
#include <string>
#include <stdbool.h>

class Student
{

    std::string name;
    std::string rollNumber;
    float marks;

public:
    Student(std::string NAME, std::string ROLLNUMBER, float MARKS)
    {
        name = NAME;
        rollNumber = ROLLNUMBER;
        marks = MARKS;
    }

    void displayDetails()
    {
        std::cout << "Name: " << name << '\n';
        std::cout << "Roll#: " << rollNumber << '\n';
        std::cout << "Marks: " << marks << '\n'
                  << '\n';
    }

    bool isPassed()
    {
        if (marks >= 50)
        {
            return true;
        }
        return false;
    }

    void updateMarks(float newMarks)
    {
        marks = newMarks;
    }
};

int main()
{

    Student Std1("John", "1", 60);
    Student Std2("James", "2", 40);
    Student Std3("Jack", "3", 70);

    Std1.displayDetails();
    Std2.displayDetails();
    Std3.displayDetails();

    if (Std1.isPassed())
    {
        std::cout << "Student 1 has passed.\n\n";
    }
    else
    {
        std::cout << "Student 1 has failed.\n\n";
    }

    if (Std2.isPassed())
    {
        std::cout << "Student 2 has passed.\n\n";
    }
    else
    {
        std::cout << "Student 2 has failed.\n\n";
    }

    if (Std3.isPassed())
    {
        std::cout << "Student 3 has passed.\n\n";
    }
    else
    {
        std::cout << "Student 3 has failed.\n\n";
    }

    Std1.updateMarks(30);
    Std2.updateMarks(60);
    Std3.updateMarks(20);

    Std1.displayDetails();
    Std2.displayDetails();
    Std3.displayDetails();
}