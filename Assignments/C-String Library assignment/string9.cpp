/* NAME: MUHAMMAD UMER FAROOQ
ROLL NUM: BCSF15M025
*/



#include<iostream>
using namespace std;
int main()
{
	//array for the series of digits
	int series[30]={0},
	//variable for sum
	sum=0,
	//variable for number input
	num,
	//variable for length of string
	len=0;
	cout<<"Enter a series of single digit numbers: ";
	cin>>num;
	//loop to separate digits and save theme in array  
	for(len=0;num>0;len++)
	{
		series[len]=num%10;
		num=num/10;
		//calculation of sum
		sum=sum+series[len];
	}
	//printing of sum
	cout<<"\nSum :    "<<sum;
	//loop  to find the highest digit
	for(int j=1;j<len;j++) 
    {
        if(series[0]<series[j])
	    {
	   		series[0]=series[j];
    	}
    }
    cout<<"\nHighest:     "<<series[0];
    //loop  to find the lowese digit
    for(int j=1;j<len;j++) 
    {
        if(series[0]>series[j])
	    {
	   		series[0]=series[j];
    	}
    }
    cout<<",     Lowest:     "<<series[0];
}
