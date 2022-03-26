
#include<iostream>

using namespace std;

main()
{
	int inner,outer;
	
	for(outer=0;outer<=3;outer++)
	{
	
		for(inner=0;inner<=4;inner++)
		{
			cout<<"value of inner for before if	"<<inner<<endl;
			if(inner==2)
			{
				break;
			}			
		
		}
	cout<<"value of outer for"<<outer<<"\n\n\n\n";
	}
}


