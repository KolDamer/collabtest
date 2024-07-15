#include <iostream>

using namespace std;


//we are applying the use of fxns in finding the net and grosspay of employees 
 double IncomeTax, NHC, DistrictTax, Edufund, Netpay, OverTime, GrossPay;
 int Regular, hoursworked, NumberOfChildren;
 string Name;
//this calculates the regular rate payment

int regularRatecalc(){
      GrossPay=hoursworked*5;


    return 0;
}

//this calculates the overtime rate payment
int overtimeRatecalc(){

     GrossPay=(40*5) +((hoursworked-40)+1.5*5);

    return 0;
}
//we then utilize the fxn in the main fxn using the fxn call
int main() {

        cout<<"Please provide the following information: \n";
        cout<<"Name: \n";
        cin>>Name;

        cout<<endl;

        cout<<"Number of hours worked this week: \n";
        cin>>hoursworked;

        cout<<endl;

        cout<<"Number of children: \n";
        cin>>NumberOfChildren;

        cout<<endl;

        if (hoursworked<=40){
                regularRatecalc();

        }

        else if (hoursworked>=40){

            overtimeRatecalc();
        }

    NHC=0.025*Netpay;
    DistrictTax=0.01*Netpay;
    IncomeTax=0.15*Netpay;

    if (NumberOfChildren>=3){
        Edufund=(NumberOfChildren-3)*0.50;


    }

    else  {
        Edufund=0;
    }

    Netpay=GrossPay-(Edufund+NHC+DistrictTax+IncomeTax);
    cout<<Name<<",\n"<<"Your GrossPay is: \n" <<GrossPay;
    cout<<" and NetPay is: "<<Netpay;
    cout<<endl;

    cout<<"Note: There will be an increment in taxes next year.\n";
    cout<<"Thank You very much\n";
    cout<<endl;
    cout<<"Please push all complaints to the CEO through the manager\n";


    return 0;
}