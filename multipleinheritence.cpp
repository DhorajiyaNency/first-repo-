// multiple inheritence 
// in bank project
// (saving account,current account = base class)
// (User1 = derived class)
#include<iostream>
using namespace std;
class SavingA
{
    protected:            // Saving account
    int bal=10000;   
    char str[20];
    public:
    int acno,depo,withd,s;   //withd=withdraw, depo=deposite s=bal+a(deposite)
    void print()
    {
        cout<<"\n Account type : ";
        cin>>str;                                //Enter account type - saving account
        cout<<"\n Account no. : ";
        cin>>acno;                                //Enter account number
        cout<<"\n Available balance : "<<bal;    // bal=10000.
    }

    void deposite()                                         
    {
        cout<<"\n\n Enter deposite amount : ";
        cin>>depo;                              // Enter deposite amount
        //cout<<"\n Show bal ="<<bal+depo;
    }
    void withdraw()                                       
    {
        cout<<"\n Enter withdraw amount : ";
        cin>>withd;                           // Enter withdraw amount
        s=bal+depo;
        //cout<<"\n Show bal ="<<s-withd;
    }
    void calc()                                               
    {
        bal=s-withd;            // s=deposite added balance   // bal = (bal+depo)-withd
        if(withd>s)                    //withd=withdraw, depo=deposite, s=total balance
        {
            cout<<"\n Limit over";
        }
        else
        {
            cout<<"\n Total available balance in saving ac. : "<<bal;
        }
    }
    
};
class CurrentA
{
    protected:              // Current account
    int bal=20000;  
    char str[20];
    public:
    int acno,depo,withd,s;  
    void print1()
    {
        cout<<"\n\n\n Account type : ";
        cin>>str;                                //Enter account type - current account
        cout<<"\n Account no. : ";
        cin>>acno;                                 //Enter account number
        cout<<"\n Available balance : "<<bal;     //bal=20000.
    }
    void deposite1() 
    {                                       
        cout<<"\n\n Enter deposite amount : ";
        cin>>depo;                                // Enter deposite amount
        //cout<<"\n show bal ="<<bal+depo;
    }
    void withdraw1()                                         
    {
        cout<<"\n Enter withdraw amount : ";
        cin>>withd;                           // Enter withdraw amount
        s=bal+depo;
        //cout<<"\n Show bal ="<<s-withd;
    }
    void calc1()                                         
    {
        bal=s-withd;                // s=deposite added balance   // bal = (bal+depo)-withd
        if(withd>s)                    //withd=withdraw, depo=deposite, s=total balance
        {
            cout<<"\n Limit over";
        }
        else
        {
            cout<<"\n Total available balance in current ac. : "<<bal;
        }
    }
    
};
class  User1 : public SavingA, public CurrentA
{
    protected:
    char str[20];
    public:
    int bal;
    void print2()
    {
        cout<<"\n\n\n User NAME : ";
        cin>>str;
    }
};

int main()
{
    User1 b1;  
    b1.print();
    b1.deposite();                   
    b1.withdraw();                   
    b1.calc();                          
    b1.print1();
    b1.deposite1();                  
    b1.withdraw1();                   
    b1.calc1();  
    b1.print2();
    b1.calc();
    cout<<"\n";
    b1.calc1();  
}
