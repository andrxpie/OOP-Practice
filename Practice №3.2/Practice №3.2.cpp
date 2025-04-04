#include <iostream>
#include <windows.h>

class Student {
protected: 
    std::string _name;

public:
    Student(std::string name) : _name(name) {}

    virtual void Study() {
        std::cout << _name << " вчиться\n";
    }

    virtual void Read() {
        std::cout << _name << " читає\n";
    }

    virtual void Write() {
        std::cout << _name << " пише\n";
    }

    virtual void Relax() {
        std::cout << _name << " відпочиває\n";
    }

    std::string getName() {
        return _name;
    }
};

class Group {
private:
    Student* _students[3];

public:
    Group(Student* student1, Student* student2, Student* student3) {
        _students[0] = student1;
        _students[1] = student2;
        _students[2] = student3;
    }
    
    void ShowGroupInfo() {
        for (int i = 0; i < 3; i++) {
            std::cout << "Студент [" << i + 1 << "]: " << _students[i]->getName() << "\n";
            _students[i]->Study();
            _students[i]->Read();
            _students[i]->Write();
            _students[i]->Relax();
            std::cout << "\n";
        }
    }
};

class GoodStudent : public Student {
public:
    GoodStudent(std::string name) : Student(name) {}

    void Study() override {
        std::cout << _name << " вчиться дуже старанно\n";
    }

    void Read() override {
        std::cout << _name << " читає багато книг\n";
    }

    void Write() override {
        std::cout << _name << " пише дуже швидко\n";
    }

    void Relax() override {
        std::cout << _name << " відпочиває активно\n";
    }
};

class BadStudent : public Student {
public:
    BadStudent(std::string name) : Student(name) {}

    void Study() override {
        std::cout << _name << " п'є pivo\n";
    }

    void Read() override {
        std::cout << _name << " спілкується з падрижкою\n";
    }

    void Write() override {
        std::cout << _name << " гортає TikTok\n";
    }

    void Relax() override {
        std::cout << _name << " п'є vodka\n";
    }
};

int main()
{
    // Встановити вивід консолі в UTF-8
    SetConsoleOutputCP(1251);

    Student* student1 = new Student("Староста");
    Student* student2 = new GoodStudent("Ромик");
    Student* student3 = new BadStudent("Бодік");

    Group group(student1, student2, student3);
    group.ShowGroupInfo();

    return 0;
}
