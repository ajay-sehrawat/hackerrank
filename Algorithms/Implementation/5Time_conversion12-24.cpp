#include <iostream>
using namespace std;
void time_convert(string str)
{
	int h1 = (int)str[1] - '0';
	int h2 = (int)str[0] - '0';
	int hh = (h2 * 10 + h1 % 10);
	//IF time is in AM
	if(str[8] == 'A')
	{
		if( hh == 12)
		{
			cout<<"00";
            //Loop will start from 2 here
			for (int i=2; i<=7; i++){
				cout<<str[i];
			}
		}
		else
		{
            //here the loop will start from 0 as nothing printed first
		    for(int i=0; i<=7; i++){
			cout<<str[i];
		    }
	    }
	}
	//If time is in PM
	else
	{
		if( hh == 12){
			cout<<"12";
			for( int i=2; i<=7; i++){
				cout<<str[i];
			}
		}
		else
		{
			hh = hh+12;
            cout<<hh;
			for( int i=2; i<=7; i++){
				cout<<str[i];
			}
		}
	}
}
int main()
{
	string str1;
	cin>>str1;
	time_convert(str1);
	return 0;
}

