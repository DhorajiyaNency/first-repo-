// single inheritence
// bank = base class
// user1 = derived class
// two class in bank programm with protected.
#include<iostream>
using namespace std;
class bank
{
    protected:
    int bal=10000;        //s=bal+depo ,s=deposite added balance
};
class user1 : public bank
{
    public:
    int s,depo,withd;
    void deposite()
    {
        cout<<"\n Available balance : "<<bal<<"\n";    

        cout<<"\n Enter deposite amount : ";
        cin>>depo;             // Enter deposite amount
    }
    void withdraw()
    {    
        s=bal+depo;   // //s=bal+depo ,s=deposite added balance
        cout<<"\n Enter withdraw amount : ";
        cin>>withd;               // Enter withdraw amount
    }
   
    void calculation()
    {
        bal=s-withd;          // bal = (bal+depo)-withd
        if(withd>s)
        {
            cout<<"\n Limit over";
        }
        else
        {
            cout<<"\n Total available balance : "<<bal;
        }
    }
};
int main()
{
    user1 b1;                      
    b1.deposite();
    b1.withdraw();
    b1.calculation();
}
