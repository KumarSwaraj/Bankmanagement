#include<stdio.h>
class bank
{
 char name[100]add[100],y;
int balance;
public:
void open_account();
void deposite_money();
void withdraw_money();
void Display_account();
};
void bank :: open_account()
{
	cout<<"enter your full name :: ";
	cin.ignore();
	cin.getline(name,100);
    
    cout<<"enter your address :: ";
	cin.ignore();
	cin.getline(add,100); 	
	
	cout<<"what type of account you want to open saving (s) or current (c) ";
	cin>>y;
	
	cout<<"enter amount for deposite :: ";
	cin>>balance;
    
    cout<<"your account is created \n";	
}
void deposite ::deposite money()
{
	int a;
	cout<<"enter how much you deposite ::";
	cin>>a;
	balance+=a;
	cout<<"total amount you deposite :: \t "<< balance;
    }
void bank:: Display_account();
{
	cout<<"your full name :: \t"<<name;
	cout<<"your address :: \t "<<add;
	cout<<"type of account that you open :: \t "<< y;
	cout<<"amount you deposite :: \t "<< balance;
}

void bank:: withdraw_account();	 
{
    float amount; 
	cout<<"\n withdraw :: ";
	cout<<"enter amount to withdraw :: ";
	cin>> amount;
	balance=balance-amount;
	cout<<"now total amount is left :: << balance";
}
	
	
int main()
{
	int ch,x;
	bank obj;
	do
	{
  cout<<"1) open account \n";
  cout<<"2) deposite money \n";
  cout<<"3) withdraw money \n";
  cout<<"4) Display account \n";
  cout<<"5) Exist"
  cout <<"select the option from above \n";
  cin>> ch;
  switch(ch)
  {
	case 1:<< "1) open account \n";
    obj.open_account();
    break;

    case 2:<< "2)deposite money \n";
    obj.deposite_money();
     break	  
    
	case 3:
	cout<< "3) withdraw money : \n";
	obj.withdraw_money();
	break
	
	case 4: "4)Display_account \n";
    obj.Display_account();
	break;
	
	case 5:
	     if(ch==5)
		 {
			 exit(1);
		 }
   default:
         cout<<"this is not exit try again \n";
        }
cout <<"\n do you want to select next option then press :: y \n";  
cout<<"if you want to exit then press :: N";
x=getch();
if(x=='n'||x='N')
exit(0);
	} while(x=='y'|| x=='Y');

getch();
return 0;
}


































