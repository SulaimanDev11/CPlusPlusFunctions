/*


*/

#include<iostream>

using namespace std;

main()
{
	
	int loop=0;
	while(loop <=6)
	{
		cout<<"before break inside while  "<<loop<<"\n";
		
		if(loop>=3)
		{
				cout<<"inside if  "<<loop<<"\n";
				break; 
				cout<<"after break inside if  "<< loop <<"\n";
		}
	  	cout<<"after break inside while  "<<loop<<"\n";
	  	loop++;
				
	}
	
}

