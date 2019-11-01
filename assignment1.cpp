#include<iostream>
#include "major.h"
using namespace std;

int main()
{
	major ob;
	cout << "the first 5 AFCs are :\n";
	ob.create_afc(25);
	ob.create_afc(50);
	ob.create_afc(90);
	ob.create_afc(40);
	ob.create_afc(55);
	
	ob.display();
	
	cout << endl;
	cout <<  "A new AFC is created in the start  :\n";
	ob.add_first(15);
	cout << endl;	
	ob.display();
	cout << endl;	
	
	
	cout  << "A new AFC is created in the end  :\n";
	ob.insert_last(10);
	ob.display();
	cout << endl;	
		
	cout  << "A first AFC is deleted  :\n";
	ob.delete_start();
	ob.display();
	cout << endl;		
	cout << "the last AFC is deleted  :\n";
	ob.delete_last();
	ob.display();
	cout << endl;	
	
	cout <<"the  AFC at 4  is deleted  and recreated at position 3 :\n";
	ob.delete_add(4,40);//it delete a AFC at position 4 and recreates an AFC at 3rd postion of value 40
	ob.display();
	cout << endl;
	
	system("pause");
	return 0;
}