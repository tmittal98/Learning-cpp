#include<iostream>

using namespace std;

class complex
{
private:
    int a,b;
public:
    void set_data(int, int);
    void display_data(){
        cout<<"\na = "<<a<<"\nb = "<<b<<endl;
    }
};
void complex:: set_data(int x, int y){
    a = x; b =y;
}
int main(){
    complex c1;
    c1.set_data(3,4);
    c1.display_data();
return 0;
}
