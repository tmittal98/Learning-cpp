#include<iostream>
using namespace std;
class sum{
private:
    int a,b;
public:
    setData(int x, int y){
     a = x;
     b = y;
    }
    showData(){
     cout<<"\na = "<<a<<"\nb = "<<b;
     cout<<"\n*****************************\n";
     }
     sum operator +(sum s){
        sum temp;
        temp.a = a + s.a;
        temp.b = b + s.b;
        return temp;
     }
};

int main(){
    sum o1,o2,o3;//creating 3 objects
    o1.setData(3,6);
    o2.setData(1,3);
    /*o3 = o1 + o2 ;*/
    /*This will show error because compiler knows + operator code and it runs the code successfully when there is primitive types as operands but for non-primitive types it shows an error*/
    o3 = o1+o2;
    o1.showData();
    o2.showData();
    o3.showData();
return 0;
}
