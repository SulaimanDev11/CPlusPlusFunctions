/*

Task 12


guess character game (Modified while loop)


*/

#include<iostream>

using namespace std;

main()
{
	
	int num_try=1;
	char guess,save_small='c',save_capital='C';
	
	do
	{
		cout<<"\n\nplease enter a single char A-Z this is your "<< num_try <<"   try   ";
		cin>>guess;
		if(guess==save_small||guess==save_capital)
		{
			cout<<"\n\nCongratulations, You have Guessed Correctly\n";
		}
		else
		{
			num_try++;
			if(num_try<5)
			{
			
				cout<<"\n\nSorry you have guessed wrongly                   !!!TRY AGAIN!!!";
			}
			else
			{
				cout<<"\n\nThis is your last try";
			}
		}
	}
	while(num_try <=5&&guess!=save_small&&guess!=save_capital);
	

}
