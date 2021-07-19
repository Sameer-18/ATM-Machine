#include<iostream>
#include<cstdlib>
using namespace std;

int main()
{
	int pin;
	bool isTrue = true;
	int password=123;
	int count=0;
	int entry;
	double deposit = 0.0;
	double balance = 0.0;
	double withdraw = 0.0;
	
	system("Color 4E");
	do{
		cout<<"**Welcome To The STATE BANK OF INDIA**\n";
	    cout<<"Enter your pin\n";
	    cin>>pin;
	    
	    if(pin == password)
		{
		 do{
	    	cout<<"**Welcome To The STATE BANK OF INDIA**\n"
	    		<< "1. Deposit\n"
	    		<< "2. Withdraw\n"
	    		<< "3. Balance\n"
	    		<< "4. Exit\n";
	    	cout<<"Choose an Option:\n";
	    	cin>>entry;
	    	
			
	    	switch(entry)
	    	{
	    		case 1:
	    			cout<<"Enter the Deposit amount:\n";
	    			cin>>deposit;
	    			balance = balance + deposit;
	    			break;
	    		case 2:
	    			if(balance<=0){
	    				cout<<"Please Deposit Some Money!\n";
					}else{
						cout<<"Enter the Withdraw amount:\n";
	    			    cin>>withdraw;
	    				balance = balance-withdraw;
					}
	    			
	    			break;
	    		case 3:
	    			cout<<"Balance amount is:\n"<<balance<<endl;
	    			break;
	    		case 4:
	    			cout<<"Have a nice day!\n";
	    			isTrue = false;
	    			break;
			}
		}while(isTrue!= false);
	    	
		}
		else{
			count++;
			  if(count==3){
			  	isTrue = false;
			  }
			  else{
			  	cout<<"Wrong pin!\n";
			  }
			
		}
	}while(isTrue != false);
	
	
	return 0;
	
}
