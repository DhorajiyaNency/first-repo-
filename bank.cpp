
// bank programm
#include<iostream>
using namespace std;
class bank
{
    protected:
    int bal=10000;    
    public:
    int s,depo,withd;    //s=bal+depo ,s=deposite added balance
    void deposite()
    {
        cout<<"\n Available balance : "<<bal<<"\n";    

        cout<<"\n Enter deposite amount : ";
        cin>>depo;            // Enter deposite amount
    }
    void withdraw()
    {    
        s=bal+depo;      //s=bal+depo ,s=deposite added balance
        cout<<"\n Enter withdraw amount : ";
        cin>>withd;            // Enter withdraw amount
    }
   
    void calculation()
    {
        bal=s-withd;     // bal = (bal+depo)-withd
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
    bank b1;                      
    b1.deposite();
    b1.withdraw();
    b1.calculation();
}


