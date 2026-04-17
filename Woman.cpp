#include "Woman.hpp"

Woman::Woman(){
    
}
Woman::Woman(string newFirstName, string newLastName, int newAge) : Person(newFirstName, newLastName, newAge){
    

}

bool Woman::isSingle() const{
    return partner.getFirstName() == "" && partner.getLastName() == "" && partner.getAge() == 0 ;

}
Person Woman::getPartner() const{
    return partner;

}
void Woman::setPartner(Person newPartner){
    partner = newPartner;

}
void Woman::display() const{
    Person::display();

   if (isSingle())
   {
        cout << "Elle est célibataire." << endl;
   }
   else {
        cout << "Elle est mariée à " + partner.getFirstName() + " " + partner.getLastName() << endl;
   }


}