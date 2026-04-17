#include "Person.hpp"

Person::Person(){
    firstName = "";
    lastName = "";
    age = 0;

}

Person::Person(string newFirstName, string newLastName, int newAge){
    firstName = newFirstName;
    lastName = newLastName;
    age = newAge;
    
}


void Person::getOld(){
    age++;

}


string Person::getFirstName() const{
    return firstName;

}

void Person::setFirstName(string newFirstName){
    firstName = newFirstName;

}


string Person::getLastName() const{
    return lastName;

}

void Person::setLastName(string newLastName){
    lastName = newLastName;

}


int Person::getAge() const{
    return age;

}

void Person::setAge(int newAge){
    age = newAge;

}


void Person::display() const{

    cout << firstName + " " + lastName + " a " + to_string(age) + " ans." << endl;

}

