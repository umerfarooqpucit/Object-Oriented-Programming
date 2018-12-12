/* NAME: MUHAMMAD UMER FAROOQ
ROLL NUM: BCSF15M025
*/


#include<iostream>
using namespace std;
int main()
{
	//array for date input
	char date[10];
	cout<<"Enter date in mm/dd/yyyy form (i.e. 02/24/2015):\n";
	cin>>date;
	//condition to check if first digit of month is 1
	if(date[0]=='1')
	{
		//if first digit of month is 1 then it checks the next digit and show the corresponding month in words,day and year.
		switch(date[1])
		{
			case '0':cout<<"October "<<date[3]<<date[4]<<","<<date[6]<<date[7]<<date[8]<<date[9];break;
			case '1':cout<<"November "<<date[3]<<date[4]<<","<<date[6]<<date[7]<<date[8]<<date[9];break;
			case '2':cout<<"December "<<date[3]<<date[4]<<","<<date[6]<<date[7]<<date[8]<<date[9];break;
		}
	}//if first digit of month is 0 then it checks the next digit and show the corresponding month in words,day and year.
	else
	{
		switch(date[1])
		{
			case '1':cout<<"January "<<date[3]<<date[4]<<","<<date[6]<<date[7]<<date[8]<<date[9];break;
			case '2':cout<<"February "<<date[3]<<date[4]<<","<<date[6]<<date[7]<<date[8]<<date[9];break;
			case '3':cout<<"March "<<date[3]<<date[4]<<","<<date[6]<<date[7]<<date[8]<<date[9];break;
			case '4':cout<<"April "<<date[3]<<date[4]<<","<<date[6]<<date[7]<<date[8]<<date[9];break;
			case '5':cout<<"May "<<date[3]<<date[4]<<","<<date[6]<<date[7]<<date[8]<<date[9];break;
			case '6':cout<<"June "<<date[3]<<date[4]<<","<<date[6]<<date[7]<<date[8]<<date[9];break;
			case '7':cout<<"July "<<date[3]<<date[4]<<","<<date[6]<<date[7]<<date[8]<<date[9];break;
			case '8':cout<<"August "<<date[3]<<date[4]<<","<<date[6]<<date[7]<<date[8]<<date[9];break;
			case '9':cout<<"September "<<date[3]<<date[4]<<","<<date[6]<<date[7]<<date[8]<<date[9];break;
			
		}
	}
}    

	

