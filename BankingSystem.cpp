#include<iostream>
using namespace std;
class Bank{
    int Acc_No;
    string Name;
    string Type;
    float Balance,Withdraw,Deposit,Re_Bal,Transfer_amt;
    int Re_Acc;
public:
    void New_Acc();
    void With_Draw();
    void Deposit_Money();
    void Transfer();
    void Check_Bal();
    void complain();
};
 void Bank ::New_Acc()
 {
     cout<<"Enter full name of customer:"<<endl;
     getline(cin,Name);
     cout<<"Enter account type:"<<endl;
     getline(cin,Type);
     cout<<"Enter amount for first deposit:"<<endl;
     cin>>Deposit;
 }
 void Bank::Check_Bal()
 {
     cout<<"Your account balance is:"<<Balance;
 }
 void Bank::Transfer()
 {
    cout<<"Enter the receiver account number:"<<endl;
    cin>>Re_Acc;
    cout<<"Enter Amount you want to transfer:"<<endl;
    cin>>Transfer_amt;
    if(Transfer_amt>Balance)
    {
        cout<<"Account balance is low!!"<<endl;
    }
    else
    {
        cout<<"Transfer successful!!"<<Balance-Transfer_amt<<endl;
    }
 }
 void Bank::Deposit_Money()
 {
     cout<<"Enter amount to Deposit:"<<endl;
     cin>>Deposit;
     cout<<endl;
     cout<<"Money deposited successfully!!"<<endl;
     cout<<"New account balance is : "<<Balance+Deposit<<endl;
 }
 void Bank::With_Draw()
 {
     cout<<"Enter amount to withdraw:"<<endl;
     cin>>Withdraw;
     cout<<"Amount Withdraw successfully!!"<<endl;
     cout<<"Remaining Balance: "<<Balance-Withdraw;
 }
 void Bank::complain()
 {
     cout<<"Select the type of complain!!"<<endl;
     cout<<"1.Amount deducted!!"<<endl;
     cout<<"2.Wrong transcation!!"<<endl;
     cout<<"3.Amount Not transfered!!"<<endl;
     cout<<"4.Profile update!!"<<endl;
 }
int main()
{
    Bank ob;
    cout<<"Welcome to State Bank of India!!"<<endl;
    int num;
    cout<<"Enter 1 to Open Account!!"<<endl;
    cout<<"Enter 2 to Deposit Money!!"<<endl;
    cout<<"Enter 3 to Withdraw Money!!"<<endl;
    cout<<"Enter 4 to Check Balance!!"<<endl;
    cout<<"Enter 5 to Transfer Money!!"<<endl;
     cout<<"Enter 6 to complain!!"<<endl;
    cout<<"Exit!!"<<endl;
    cin>>num;
    switch(num)
    {
    case 1:
        ob.New_Acc();
        break;
    case 2:
        ob.Deposit_Money();
        break;
    case 3:
        ob.With_Draw();
        break;
    case 4:
        ob.Check_Bal();
        break;
    case 5:
        ob.Transfer();
        break;
    case 6:
        ob.complain();
        break;
    default:
        cout<<"Exit!!"<<endl;
        break;
    }

}
