//Implementation of concept Function Object
/* 
Function object - It can be defined as the function declare inside the class and call that function
				  by the object of that class.
				  Function object known as the smart pointer of class, which are faster than the regular
				  function call.
*/
#include<iostream>
using namespace std;

class Function_object
{
	public:		
		int operator()(int no1,int no2)
		{
			return no1+no2;
		}
		
		int operator()(int no1,int no2,int no3)
		{
			int result = no1 - no2;
			return result-no3;
		}
		
		int operator()(int no1)
		{
			int result=0;
			if(no1 % 2 == 0)
				result = 1;
			
			return result;
		}
};

int main()
{
	Function_object f1;
	int result = f1(10,20);
	cout<<"Addition is : "<<result<<endl;
	
	int sub = f1(22,11,5);
	cout<<"Substraction is :"<<sub<<endl;
	
	int even =  f1(2);
	if(even == 1)
		cout<<"even number \n";
	else
		cout<<"not even number \n";
		
	return 0;
}
