#include <iostream>


class Person {
    public:
        std::string getName();
        float getSalary();
        float getSales();
        
        Person();
        void setName(std::string _name);
        void setSalary(float _salary);
        void setSales(float _sales);
    
    private:
        std::string name;
        float salary;
        float sales;
};

Person::Person(){
}

std::string Person::getName(){
    return this->name;
}

void Person::setName(std::string _name){
    this->name = _name;
}

float Person::getSalary(){
    return this->salary;
}

void Person::setSalary(float _salary){
    this->salary = _salary;
}

int main()
{
    Person object;


    bool brenner;

    brenner = true;

    if (brenner == true) 
        std::cout << "Entrei" << std::endl;

    std::cout << "Não entrei" << std::endl;

    return 0;

    std::string aux;
    float aux2;

    std::cout << "Enter Employee's name: " << std::endl ;
    std::cin >> aux;
    object.setName(aux);
    
    std::cout << object.getName() << std::endl;

    std::cout << "Enter Employee's salary: " << std::endl ;
    std::cin >> aux2;
    object.setSalary(aux2);
    std::cout << object.getSalary() << std::endl;
    std::cout << sizeof(object) << std::endl;

	return 0;
}