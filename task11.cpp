/*

Task 11


guess character game (Modified while loop)


*/

#include<iostream>

using namespace std;

main()
{
	
	int num_try=1;
	char guess,save='c';
	
	do
	{
		cout<<"\n\nplease enter a single char A-Z this is your "<< num_try <<"   try   ";
		cin>>guess;
		if(guess==save)
		{
			cout<<"\n\nCongratulations, You have Guessed Correctly\n";
		}
		else
		{
			num_try++;
			cout<<"\n\nSorry you have guessed wrongly  !!!TRY AGAIN!!!";
		}
	}
	while(num_try <=5&&guess!=save);
	
}


