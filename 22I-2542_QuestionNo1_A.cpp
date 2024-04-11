#include"Header.h"
using namespace std;
//22I-2542_Q1_A
#include<iostream>
using namespace std;
int* BaseConverter( float number, int base )
{
	int ch[32];
	switch ( base )
	{
	case 1:		//Convert 10 to other number system
	{
		cout << "Base 2 System: " << endl;
		for ( int i = 0; number > 1; i++ )
		{
			if ( number > 1 )
			{
				ch[i] = ( (char)number % 2 ) + '0';
				number = number / 2;
			}
		}
	   
		for ( int i = sizeof( ch ); i > 1; i-- )
		{
					return ch;
		}
				
		
	}
	case 2:
	{
		cout << "Base 8 System: " << endl;
		for ( int i = 0; number > 1; i++ )
		{
			if ( number > 1 )
			{
				ch[i] = ( (char)number % 8 ) + '0';
				number = number / 8;
			}
		}

		for ( int i = sizeof( ch ); i > 1; i-- )
		{
	
			return ch;
		}

	}
	case 3:
	{
		cout << "Base 16 System: " << endl;
		for ( int i = 0; number > 1; i++ )
		{
			if ( number > 1 )
			{
				ch[i] = ( (int)number % 16 ) + '0';
				number = number / 16;
			}
			if ( number <= 9 )
			{
				ch[i] = ( (char)number % 16 ) + '0';
			}
		}

		for ( int i = sizeof( ch ); i > 1; i-- )
		{
			return ch;
		}
	}
	case 4:
	{
		int decimalResult = 0;
		int power = 0;

		for ( int i = sizeof( number ) - 1; i >= 0; --i ) 
		{
			if (ch[i] == '1' )
				decimalResult += pow( 2, power );
			power++;
		}
		for ( int i = sizeof( number ) - 1; i >= 0; --i )
		{
			  return ch;

		}

		
	}
}
int main( )
{
	float num;
	int base;
	cout << "Enter number: " << endl;
	cin >> num;
	cout << "---------------------------------" << endl;
	cout << "1.Binary system(base 2). " << endl;
	cout << "2.Octal System(Base 8). " << endl;
	cout << "3.HexaDecimal System(Base 16). " << endl;
	cout << "4.Decimal to binary(base 2)." << endl;
	cout << "Enter Base: " << endl;
	cin >> base;
	if ( base < 0 )
	{
		cout << "Invalid base!" << endl;
	}
	else
	cout<<BaseConverter( num, base );
}
