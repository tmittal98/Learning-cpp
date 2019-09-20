#include<iostream>

using namespace std;

class Account {
private:
    int balance;// Instance Member Variable
    static float roi; //Static Member Variable / Class Member Variable
    static int Account_no;
public:
    static void set_roi(float r){//Static Member Function
        roi = r;
    }
    static void set_accno(int no){
        Account_no = no;
    }
    void show_data(){
        cout<<"\nAccount No = "<<Account_no;
        cout<<"\nbalance = "<<balance;
        cout<<"\nroi = "<<roi;
    }
    void set_balance(int b){ // Instance Member function
        balance = b;
    }
};
//Static Member Variable Declaration
float Account:: roi = 3.5f;//membership label
int Account:: Account_no;
int main(){
    int balance;
    Account a1;
   /* Account:: roi = 4.5; */ //we can't do this as roi is private
   Account :: set_roi(4.5f);//SMF can be called without object using membership label
   Account :: set_accno(123456798);
   cout<<"Enter you balance\n";
   cin>>balance;
   a1.set_balance(balance);
   a1.show_data();
return 0;
}
//NOTE
/* To make a  static member variable we need to declare it in class as static type var-name and outside class write the static
member variable defination  then only memory will be assigned to it */
/* roi and Account_no are same for all objects */




