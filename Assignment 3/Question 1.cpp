#include <iostream>
using namespace std;

class Volume
{
private:
   int length;
   int breadth;
   int height;
public:
    Volume(){
        length = 1;
        breadth = 2;
        height = 3;
    }
    Volume(int l,int b,int h){
        this->length = l;
        this->breadth = b;
        this->height = h;
    }
    Volume(int l){
        this->length = l;
        this->breadth = l;
        this->height = l;
    }

    void calculateVolume(){
        int volume = length * breadth * height;
        cout<<"The given volume : "<<volume<<endl;
    }
};

int menu(){
    int choice;
    cout<<"1. Calculate Volume with default values"<<endl;
    cout<<"2. Calculate Volume with length,breadth and height with same value"<<endl;
    cout<<"3. Calculate Volume with different length,breadth and height values."<<endl;
    cin>>choice;
    return choice;
}

    int main(){
        int choice;
        Volume v1;
        Volume v2(2);
        Volume v3(1,4,5);
        ///menu driven code functionality in while loop.
        //Functionality will break if you enter 0.
        while((choice = menu())!=0){
            switch (choice)
            {
            case 1:
                v1.calculateVolume() ;
                break;
            case 2:
                v2.calculateVolume() ;
                break;    
            
            case 3:
                v3.calculateVolume() ;
                break;

            default:
                cout<<"Please enter the correct choice"<<endl;;    
            }

        }
    return 0;
    }