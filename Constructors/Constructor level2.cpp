/*CONSTRUCTOR OVERLOADING*/
/*DEFAULT CONSTRUCTOR */
/*PARAMETERIZED CONSTRUCTOR*/
#include<iostream>
#include<cstring>
using  namespace std;

class car {
private:
    char brand[10];
    char carNumber[10];
public:
    /*CONSTRUCTORS*/
    car (){
        strcpy(brand,"Maruti Suzuki");
        strcpy(carNumber,"WB1234");
    }//default constructor
    car (char *company,char *carNo){
        strcpy(brand,company);
        strcpy(carNumber,carNo);
    }
    car (char *company){
        strcpy(brand,company);
    }
    void showData(){
        cout<<"\n********************************\n";
        cout<<"\nBrand = ";
        puts(brand);
        cout<<"\nCar Number = "<<carNumber;
        cout<<"\n********************************\n";
    }
};

int main()
{
    car c1("Honda","WB1234");//c1 object is created
    car c2("Ford");
    car c3;
    c1.showData();
    c2.showData();
    c3.showData();
return 0;
}
