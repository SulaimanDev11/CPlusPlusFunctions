#include<iostream>

using namespace std;


main()
{
	const int end=100;
	
	char ary1[end],ary2[end];
	int equal=1,number,i=0;
	    
	
	cout<<"Enter a sentence               ";
	cin>>ary1;
	
	cout<<"Enter same sentence again      ";
	cin>>ary2;
	
	while(ary1[i]!='\0')
	{
		i++;
		number=i;
		
	}
		
	for(int i=0;i<number;i++)
	{
	 	if(ary1[i]!=ary2[i])
	 	{
	 		equal=0;
	 		break;	 		
	 	}
	}
	
	if(equal==1)
	{
		cout<<"\nequal";
	}
	else
	{
		cout<<"\nnot equal";
	}
		
}
