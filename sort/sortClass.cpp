#include <iostream>
#include <algorithm>

using namespace std;

class Student
{
public:
    string name;
    int score;

    Student(string name, int score)
    {
        this->name = name;
        this->score = score;
    }
    bool operator<(const Student &student) // const 붙여서 해결
    {
        return this->score < student.score;
    }
};
 
bool compare(Student a, Student b)
{
    return a.score > b.score;
}

int main(void)
{
    Student students[] = {
        Student("나동빈", 90),
        Student("김서영", 96),
        Student("김서현", 93),
        Student("강지연", 92),
        Student("박한우", 94),
    };
    // sort(students, students + 5, compare);
    sort(students, students + 5);

    for (int i = 0; i < 5; i++)
    {
        cout << students[i].name << ' ';
    }
    return 0;
}