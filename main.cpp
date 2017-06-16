//test

#include <iostream>
#include <boost/filesystem.hpp>
#include <boost/optional.hpp>
#include <boost/optional/optional_io.hpp>

using namespace boost;
using namespace std;

class Address {
public:
    Address(string add) : street(add) {}
    string street;
};

class Person {
public:
    Person(string fN, string lN) : firstName(fN), lastName(lN) {}
    
    string firstName, lastName;
    optional<string> middleName;
    optional<Address> address;
};

int main () {
    
    Person p{"Zain", "Khalid"};
    p.middleName = "Asim";
    
    if (p.middleName)
        cout << *p.middleName << endl;
    
    p.address =  Address("Lena Crescent");
    
    if (p.address)                         //boolean function, optional is made up of the value and a boolean saying whether it's been initialized or not
        cout << p.address->street << endl; //also can use *p.address.street
    
    return 0;
}