#include <iostream>
using namespace std;
int main(){

int merchant_id,choice,user,option,Mobile_number,confirmation_number,Reference,Pin,number;
string merchant_name,Rname,reason,Account_name;
double Amount,fee,ACfee,amount_in_account;
//fee=Amount/100;
double balance= amount_in_account - Amount-fee;
//ACfee=Amount*0.05;
string code = "*170#";
do{
    int shortcode_limit = 3;
    cout << "Enter short code:";
    cin>>code;
    if(shortcode_limit > 3 )
    {
        cout << "UNKNOWN APP";
    }
}
while(code != "*170#");


if(code == "*")
  //  cout<<
  {
    cout<<"Sorry you have entered a wrong code....Enter correct code: ";
}else{
    A:
    cout<<"1) Transfer money";
    cout<<"\n""2) MoMo pay and Pay bill";
    cout<<"\n""3) Airtime and bundles";
    cout<<"\n""4) Allow cash out";
    cout<<"\n""5) Financial Services";
    cout<<"\n""6) My Wallet\nEnter number: ";
}
    cin>>choice;

    if(choice==1)
{

    B:
    cout<<"1) MoMo User";
    cout<<"\n 2) Non MoMo User";
    cout<<"\n 3) Send with care";
    cout<<"\n 4) Favourite";
    cout<<"\n 5) Other Networks";
    cout<<"\n 6) Bank Account";
    cout<<"\n 0) Back\n Enter number: ";

    cin>>option;
    //if user chooses MoMo user

        if(option==1){
        cout<<"Enter Mobile Number: ";
        cin>>Mobile_number;
        cout<<"confirm number: ";
        cin>>confirmation_number;
        if(Mobile_number!= confirmation_number){
            cout<<"numbers do not match";
            }else {cout<<"Enter Amount: ";
            cin>>Amount ;
            cout<<"Enter Reference: ";
            cin>>Reference;
            cout<<"Transfer to-"<<Rname << confirmation_number << "for GHS" << Amount << "with Reference:" << Reference << ".Fee is GHS"<< Amount/100 << "Enter Pin" << " or " << 2 << "to cancel""\n";
            cin>>user;
            if(user==Pin){
                cout<<"GHS" << Amount <<"sent to-" << Rname << confirmation_number <<".Fee is:" << "GHS" << Amount/100 << "balance is: " << balance << "Thank you";
            }else{goto A;

        }

            }
    }
    if(option==2){
        cout<<"service unavailable,please try again later";
    }
    if (option==3){
       C:
        cout<<"1) Mobile user";
        cout<<"\n 2) My family";
        cout<<"\n 3) MyCare Taker";
        cout<<"\n 4) AYO send care balances or claim";
        cout<<"\n 0) back \n Enter number: ";
    }
    cin>>user;
    if(user==1){
        cout<<"please enter Recipient number: ";
        cin>>Rname;
        cout<<"Please enter Amount: ";
        cin>>Amount;
        cout<<"Please enter a reason: ";
        cin>>reason;
        cout<<"Y'ello you are sending GHS" << Amount << "Receiver:" << Rname <<".Reason:" << reason << "fee GHS 0.00, AYO cover fee:GHS " << Amount*0.05 <<"..Enter pin to accept AYO Ts and Cs \n";
        cin>>user;
        if(user==Pin){
            cout<<"GHS" << Amount <<"sent to-" << Rname <<".Fee GHS 0.00,AYO cover fee: GHS " << Amount*0.05 << "balance is: " << balance << "Thank you.";
            }else{goto A;
        }
    }
}
   //momo pay and pay bill

if(choice == 2){
       D:
        cout<<"1) MoMo pay";
        cout<<"\n 2)Pay bill";
        cout<<"\n 3)GHQR";
        cout<<"\n 0) Back\n enter number: ";
        cin>>option;
        if(option==1){
            cout<<"Please enter merchant id/payment reference: ";
            cin>>option;
            if (option==merchant_id){
                cout<<"please enter amount: ";
                cin>>Amount;
                cout<<"cash out of GHS " << Amount << " to " << merchant_name << " enter Pin to continue \n";
                cin>>option;
                if(option==Pin){
                    cout<< " cash out made for " << Amount << " to " << merchant_name << " you balance is:GHS" << balance << "Thank you.";

                }else{
                goto A;}

        if(option==2){
                cout<<"service not available \n";
            /*cout<<"1) utilities";
            cout<<"\n 2) TV & entertainment";
            cout<<"\n 3) school fees";
            cout<<"\n 4) MTN bills";
            cout<<"\n 5) General payment";
            cout<<"\n 6) EVD";
            cout<<"\n 0) Back";*/
        }else{goto D;}
        if(option==3){
            cout<<"SERVICE UNAVAILABLE \n";
        }else{goto D;}
        if(option==0){goto D;}
}
  }
    }
    //Airtime and bundles
if (choice==3){
    E:
        cout<<"1)Airtime";
        cout<<"\n 2) Internet Bundles";
        cout<<"\n 3) Fixed Broadband";
        cout<<"\n 4) Schedule Airtime";
        cout<<"\n 0) Back\n Enter number: ";
        cin>>option;
    if(option==1){
    F:
        cout<<"1)Self";
        cout<<"\n 2) others";
        cout<<"\n 3) Welcome pack";
        cout<<"\n 4) Other Networks\n Enter a number: ";
        cin>>user;
    if(user==1){
        cout<<"Enter Amount: ";
        cin>>Amount;
    cout<<"Dear "<< Account_name <<" Send GHS "<< Amount <<" AirtimeSelf to "<< number <<" Fee is GHS 0.00 Enter MM Pin or 2 to cancel ";
    cin>>user;
    if(user==Pin){
            cout<<" Airtime of "<< Amount<<" Purchased for "<< number<<" 100% Bonus value for Receiving number is "<<Amount<< "valid for 7 days. Thank you ";

}
  }
    }
     }
return 0;
}
