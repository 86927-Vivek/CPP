/*Q2. Imagine a tollbooth at a bridge. Cars passing by the booth are expected to pay a fifty cent toll.
Mostly they do, but sometimes a car goes by without paying.
The tollbooth keeps track of the number of cars that have gone by and of the total amount of money
collected. Model this tollbooth with a class called tollbooth.
The two data items are a type unsigned int to hold the total number of cars, and a type double to
hold the total amount of money collected.
A constructor initializes all data members to 0. A member function called payingCar() increments
the car total and adds 0.50 to the cash total. An other function, called nopayCar()
increments the car total but adds nothing to the cash total. Finally, a member function called
printOnConsole() displays the two totals and number of paying as well as non paying cars total.*/


#include<iostream>
using namespace std;

class tollbooth
{
private:
    unsigned int paycarsCount;
    unsigned int noPayCarsCount;
    double amount;
public:
    tollbooth(){
        this->paycarsCount=0;
        this->noPayCarsCount=0;
        this->amount = 0.0;
    }
    void payingCar(){
        paycarsCount++;
        this->amount += 0.5;
    }

    void nopayCar(){
        noPayCarsCount++;
    }

    void printOnConsole(){
        cout<<"The count of paying cars := "<<paycarsCount<<endl;
        cout<<"The count of non-paying cars := "<<noPayCarsCount<<endl;
        cout<<"The total amount is := "<<amount<<endl;
    }
    
};
int main(){
    cout<<"The output for t1 :- "<<endl;
    tollbooth t1;
    t1.payingCar();
    t1.payingCar();
    t1.nopayCar();
    t1.printOnConsole();

    cout<<"The output for t2 :- "<<endl;
    tollbooth t2;
    t2.payingCar();
    t2.payingCar();
    t2.payingCar();
    t2.payingCar();
    t2.payingCar();
    t2.payingCar();
    t2.nopayCar();
    t2.nopayCar();
    t2.nopayCar();
    t2.printOnConsole();
    
    return 0;
}
