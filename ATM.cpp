#include <iostream>
using namespace std;


class user_info{
		public:
			int user_id;
			string user_name;
	
};

class user_account {
		public:
			int user_id;
			int password;
			int account_balance;
			
			int take(int a)
			{
				int amount = a ;
				int account_balance;
				if  ( amount < account_balance )
				{
					account_balance - amount == account_balance ;
				}else {
					cout<<"there is not enough money in your bank account"<<endl;
				}
			}
			
			int change (int b)
			{
				int new_pass;
				password = new_pass ;
			}
	
};


int main()
{
	cout<<"please enter your user ID"<<endl;
		int username;
	cin>>username;
	
		user_info id;
		id.user_id = username;
		
	cout<<"please enter your password"<<endl;
		int passcode;
	cin>>passcode;
		user_account pass;
		pass.password = passcode ;
		
	user_info name;
	name.user_name = "kiarash";
	
	user_account balance;
	balance.account_balance = 12200 ;
	
	int function;
	cout<<"availabe functions are:"<<endl
		<<"1: withdraw money"<<endl
		<<"2: change password"<<endl
		<<"3: show current account balance"<<endl
		<<"4: display last 10 done functions"<<endl
		<<"please enter the number of function that you want to do:"<<endl;
		
	cin>>function;
	
	switch (function)
	{
		
		case 1:
			
			//withdraw money
			
			cout<<"please enter the amount of money that you want to take:"<<endl;
				int amount;
			cin>>amount;
			
			user_account balance;
			balance.take(amount);
			int c;
			amount = c;
			cout<<"function done."<<endl<<"your current account balance is: "<<c;
		break;
		
		case 2:
			
			//change password
			
			int new_pass;
			cout<<"please enter your new password:"<<endl;
			cin>>new_pass;
			user_account pass;
			pass.change(new_pass);
			cout<<"done!"<<endl;
		break;
		
		case 3:
			
			//show account balance
			
			int blnc;
			user_account balance2;
			balance2.account_balance = blnc;
			cout<<blnc;
			break;
			
	//	case 4:
			
			// show last 10 functions
			
			// break;
			
			//default:
		}
		return 0;
	}
			
			
			




