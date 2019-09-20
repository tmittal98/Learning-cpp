#include<iostream>

using namespace std;

class area{
private:
    float r;// for circle
    int l,b;//for rectangle
    int s;//for square
public:
    /* DESTRUCTOR */
    ~area(){
        cout<<"DESTRUCTOR WORKED";
    }
};
void fun();
int main()
{
    fun();
    return 0;
}
void fun(){
    area obj1;
}
