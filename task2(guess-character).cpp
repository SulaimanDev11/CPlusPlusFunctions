/*

Task 2


Modify guess character program done is do-while loops by use of break?


*/

#include<iostream>

using namespace std;

main()
{
	
	int num_try=1;
	char guess,save='c';
	
	do
	{
		cout<<"\n please enter a single char A-Z this is your "<< num_try <<"   try   ";
		cin>>guess;
		if(guess==save)
		{
			cout<<"\n\nCongratulations, You have Guessed Correctly\n";
			break;
			
		}
		else
		{
			num_try++;
			cout<<"\n\nSorry you have guessed wrongly                   !!!TRY AGAIN!!!";
		}
	}
	while(num_try <=5);
	
}


