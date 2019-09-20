#include<iostream>

using namespace std;

class LinearEquation{
private:
    int a,b,c;
public:
    void showData(){
        cout<<"\n**********************************\n";
        cout<<"\na = "<<a<<"\nb = "<<b<<"\nc = "<<c;
        cout<<"\n**********************************\n";
    }
    LinearEquation (int x, int y, int z){
        a = x;
        b = y;
        c = z;
    }
    LinearEquation (int p, int q){
        a = p;
        b = q;
    }
    LinearEquation (int k){
        a = k;
    }
    LinearEquation (){} //DEFAULT CONSTRUCTOR
    /*COPY CONSTRUCTOR*/
    LinearEquation(LinearEquation &l1){
        a = l1.a;
        b = l1.b;
        c = l1.c;
    }

};
int main()
{
    LinearEquation l1(2,3,4),l2(67,98);
    LinearEquation l3(8);//ONLY WHEN PASSING SINGLE ARGUMENT TO CONSTRUCTOR
    LinearEquation l4;// DEFALUT CONSTRUCTOR CALLED
    LinearEquation l5(l1); //WE NEED A COPY CONSTRUCTOR
    l1.showData();
    l3.showData();
    l4.showData();
    l5.showData();
    return 0;
}
