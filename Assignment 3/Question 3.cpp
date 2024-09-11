/**/


#include<iostream>
using namespace std;

class Address
{
private:
string building;
string street;
string city;
int pin;
   
public:
    void setBuilding(string building){
        this->building = building;
    }

    string getBuilding(){
        return building;
    }

    void setStreet(string street){
        this->street = street;
    }
    string getStreet(){
        return street;
    }

    void setCity(string city){
        this->city=city;
    }
    
    string getCity(){
        return city;
    }


    void setPin(int pin){
        this->pin =pin;
    }
    int getPin(){
        return pin;
    }

    void accept(){
        cout<<"Enter the building :- "<<endl;
        cin>>this->building;
        cout<<"Enter the street :- "<<endl;
        cin>>this->street;
        cout<<"Enter the city :- "<<endl;
        cin>>this->city;
        cout<<"Enter the pin"<<endl;
        cin>>this->pin;
    }

    void display(){
        cout<<"Building name := "<<this->building<<endl;
        cout<<"Street name := "<<this->street<<endl;
        cout<<"City name := "<<this->city<<endl;
        cout<<"Pincode := "<<this->pin<<endl;
    }

};
int main(){

    Address address;
    address.accept();
    address.setBuilding("Laxmi Plaza");
    address.setStreet("Ramnagar");
    address.setCity("Chandrapur");
    address.setPin(7785);
    address.display();
    
    
    return 0;
}
