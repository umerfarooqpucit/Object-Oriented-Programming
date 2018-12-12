#include<iostream>
using namespace std;
int main()
{
	int account_num[10]={0},amount[10]={0},pin[10]={0},temp_pin,managerpin=1234,temp_act_no,temp_amount,intrst;char trans,again='y';bool flag=false;
	while(again=='y')
	{
		cout<<"Transaction type?:";
		cin>>trans;
		while(trans!='O' && trans!='B' && trans!='D' && trans!='W' && trans!='C' && trans!='I' && trans!='P' && trans!='E' && trans!='S')
		{
			cout<<"Enter valid transaction type:";
			cin>>trans;
		}
		switch(trans)
		{
			case 'S':	cout<<"\nEnter your pin:";
						cin>>temp_pin;
						if(temp_pin==managerpin)
						{
							cout<<"			WELCOME			\nBank is Opened.\n\n";
						}
						else
						{
							cout<<"\nYou aren't Manager.You are not allowed to do this transaction.";
						}
						break;
			case 'O': 	for(int i=0;i<10;i++)
						{
							if(account_num[i]==0)
							{
								account_num[i]=i+1;
								cout<<"\nInitial Deposit:";
								cin>>amount[i];
								cout<<"\nEnter a pin number:";
								cin>>pin[i];
								cout<<"\nYour account has been created.\nAccount number:"<<i+1;break;
							}
						}
						break;
			case 'B': 	cout<<"\nAccount number:";cin>>temp_act_no;
						for(int i=0;i<10;i++)
						{
							if(temp_act_no==account_num[i])
							{
								flag=true;
								cout<<"\nEnter your pin:";
								cin>>temp_pin;
								if(temp_pin==pin[temp_act_no-1])
								{
									cout<<"\nYour account number is:"<<i+1<<"\nYour Current Balance is:"<<amount[i]<<endl;break;
								}
								else
								{
									cout<<"\nYour pin is incorrect.";
								}
							}
						}
						if(!flag)
						{
							cout<<"\nYour account is not present.Please open an account.";
						}
						flag=false;
						break;
			case 'D':	cout<<"\nAccount number:";cin>>temp_act_no;
						for(int i=0;i<10;i++)
						{
							if(temp_act_no==account_num[i])
							{
								flag=true;
								cout<<"\nEnter your pin:";
								cin>>temp_pin;
								if(temp_pin==pin[temp_act_no-1])
								{
									cout<<"\nEnter amount to deposit:";
									cin>>temp_amount;
									amount[i]+=temp_amount;
									cout<<"\nYour account number is:"<<i+1<<"\nYour New Balance is:"<<amount[i]<<endl;break;
								}	
								else
								{
									cout<<"\nYour pin is incorrect.";
								}	
							}
						}
						if(!flag)
						{
							cout<<"\nYour account is not present.Please open an account.";
						}
						flag=false;
						break;
			case 'W':	cout<<"\nAccount number:";cin>>temp_act_no;
						for(int i=0;i<10;i++)
						{
							if(temp_act_no==account_num[i])
							{
								flag=true;
								cout<<"\nEnter your pin:";
								cin>>temp_pin;
								if(temp_pin==pin[temp_act_no-1])
								{
									cout<<"\nEnter amount to withdraw:";
									cin>>temp_amount;
									if(temp_amount>amount[i])
									{
										cout<<"\nYour balance is not sufficient.";
									}
									else
									{
										amount[i]=amount[i]-temp_amount;
										cout<<"\nYour account number is:"<<i+1<<"\nYour New Balance is:"<<amount[i]<<endl;
									}
									break;
								}
								else
								{
									cout<<"\nYour pin is incorrect.";
								}
							}
						}
						if(!flag)
						{
							cout<<"\nYour account is not present.Please open an account.";
						}
						flag=false;
						break;
			case 'C':	cout<<"\nAccount number:";cin>>temp_act_no;
						for(int i=0;i<10;i++)
						{
							if(temp_act_no==account_num[i])
							{
								flag=true;
								cout<<"\nEnter your pin:";
								cin>>temp_pin;
								if(temp_pin==pin[temp_act_no-1])
								{
									account_num[i]=0;
									cout<<"\nYour account has been closed.";break;
								}
								else
								{
									cout<<"\nYour pin is incorrect.";
								}
							}
						}
						if(!flag)
						{
							cout<<"\nYour account is not present.Please open an account.";
						}
						flag=false;
						break;
			case 'I':	cout<<"\nEnter your pin:";
						cin>>temp_pin;
						if(temp_pin==managerpin)
						{
							cout<<"\nInterest rate?:";
							cin>>intrst;
							for(int i=0;i<10;i++)
							{
								amount[i]+=(amount[i]*intrst/100);
							}
							cout<<"\nInterest rate has been applied.";
						}
						else
						{
							cout<<"\nYou aren't Manager.You are not allowed to do this transaction.";
						}
						break;
			case 'P':	cout<<"\nEnter your pin:";
						cin>>temp_pin;
						if(temp_pin==managerpin)
						{
							cout<<"\nAccount number		Amount"<<endl;
							
							for(int i=0;i<10;i++)
							{
								if(account_num[i]!=0)
								{
									cout<<account_num[i]<<"			"<<amount[i]<<endl;
								}
							}
						}
						else
						{
							cout<<"\nYou aren't Manager.You are not allowed to do this transaction.";
						}
						break;
			case 'E':	cout<<"\nEnter your pin:";
						cin>>temp_pin;
						if(temp_pin==managerpin)
						{
							for(int i=0;i<10;i++)
							{
								account_num[i]=0;
							}
							cout<<"\nAll accounts have been closed.Program is exited.";
							again='n';
						}
						else
						{
							cout<<"\nYou aren't Manager.You are not allowed to do this transaction.";
						}
						break;				
		}
		if(again!='n')
		{
			cout<<"\nDo you want to continue?:[y/n]";
			cin>>again;cout<<endl<<endl;
		}
	}
}
