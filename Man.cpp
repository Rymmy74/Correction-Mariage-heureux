#include "Man.hpp"

Man::Man()
{
}
Man::Man(string newFirstName, string newLastName, int newAge) : Person(newFirstName, newLastName, newAge)
{
}

bool Man::isSingle() const
{
    return partner.getFirstName() == "" && partner.getLastName() == "" && partner.getAge() == 0;
}
Person Man::getPartner() const
{
    return partner;
}
void Man::setPartner(Person newPartner)
{
    partner = newPartner;
}
void Man::display() const
{
    Person::display();

    if (isSingle())
    {
        cout << "Il est célibataire." << endl;
    }
    else
    {
        cout << "Il est marié à " + partner.getFirstName() + " " + partner.getLastName() << endl;
    }
}