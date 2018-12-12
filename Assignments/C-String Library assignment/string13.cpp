/* NAME: MUHAMMAD UMER FAROOQ
ROLL NUM: BCSF15M025
*/


#include<iostream>
using namespace std;
int main()
{
	//array for password input
	char pass[30];
	//variable for length
	int len=0,
	//variables for uppercase,lowercase and digit existence check
	upper=0,lower=0,dig=0;
	cout<<"Enter password:";
	//loop that takes input untill all checks are 1 and length>6
	while(upper!=1 || lower!=1 || dig!=1 || len<6)
	{
		cin>>pass;
		upper=0;lower=0;dig=0;len=0;
		//loop to calculate length
		for(int i=0;pass[i]!='\0';i++)
		{
			len++;
		}
		//loop that does not let to proceed untill length is greater or equal to 6
		while(len<6)
		{
			cout<<"\nPassword should be at least 6 characters long.Enter again:\n ";
			cin>>pass;
			len=0;
			for(int i=0;pass[i]!='\0';i++)
			{
				len++;
			}
		}//loop to evaluate all values of pass
		for(int i=0;pass[i]!='\0';i++)
		{
			//if any of the chars belong to uppercase it puts "1" in upper
			if(pass[i]>='A'&&pass[i]<='Z')
			{
				upper=1;
			}
			//if any of the chars belong to lowercase it puts "1" in lower
			else if(pass[i]>='a'&&pass[i]<='z')
			{
				lower=1;
			}
			//if any of the chars belong to digits it puts "1" in dig.
			else if(pass[i]>='0'&&pass[i]<='9')
			{
				dig=1;
			}
		}
		//these conditions display corresponding error messages if any of conditions(upper,lower and dig) is "0".
		if(upper!=1)
		{
			if(dig!=1)
			{
				cout<<"\nPassword should contain at least one uppercase letter and a digit.Enter again:\n";
			}
			else if(lower!=1)
			{
				cout<<"\nPassword should contain at least one uppercase letter and one lowercase letter.Enter again:\n";
			}
			else
			{
			 cout<<"\nPassword should contain at least one uppercase letter.Enter again:\n";
			}
		}
		else if(lower!=1)
		{
			if(dig!=1)
			{
				cout<<"\nPassword should contain at least one lowercase letter and a digit.Enter again:\n";
			}
			else
			{
			 	cout<<"\nPassword should contain at least one lowercase letter.Enter again:\n";
			}
		}
		else if(dig!=1)
		{
		 	cout<<"\nPassword should contain at least one digit.Enter again:\n";
		}
		//prints this message if all requirments are fulfilled.
		else
		{
			cout<<"Password is good.";
		}
	}
}
