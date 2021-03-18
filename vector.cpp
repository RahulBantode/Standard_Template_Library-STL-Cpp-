/*STL- Implementation of Vector
	   Vector is the sequence container where we can add and delete the elements at back
	   vector is dynamic array the size of vector gets changes automatically as the elements are added
	   or elements are deleted from vector.
	   Vector added the element in the contigous memory location.
	   to implement the vector u need to include header file vector.
	   
	    
*/

#include<iostream>
#include<vector>
using namespace std;

class VectorFunctionality
{	
	private:
		vector<string> v1;
		string msg;
	public:
		//function added the element to last
		void addElementLast()
		{
			cout<<"Enter the element to add last : ";
			cin>>msg;
			v1.push_back(msg);			
		}
		
		//function added the element to first
		void addElementFirst()
		{
			cout<<"Enter the element to add first : ";
			cin>>msg;
			//begin and end are the function of iterator. which points first and last element of vector.
			v1.insert(v1.begin(),msg);
		}
		
		//It gives an size of the vector
		int sizeVector()
		{
			return v1.size();
		}
		
		//It removes an element from vector from last
		void deleteElementLast()
		{
			//this function doesnt take parameter and dosent return anything.
			v1.pop_back();
			
		}
		
		//It insert the element at specified position.
		void insertElementPos()
		{
			int pos;
			cout<<"Enter the position : ";cin>>pos;
			cout<<"Enter the element to add ";cin>>msg;
			
			if(pos >= v1.size())
				v1.insert(v1.end(),msg);
			else
				v1.insert(v1.begin()+pos,msg);
				
		}
		
		void display()
		{
			cout<<"The size of vector : "<<sizeVector()<<endl;	
			cout<<"The elements in vector : "<<endl;
			for(vector<string> ::iterator itr=v1.begin(); itr!=v1.end(); itr++)
			{
				cout<<*itr<<endl;
			}
			cout<<"-----------------------------------------------"<<endl;
		}
};

int main()
{
	VectorFunctionality vf;
	int choice = 0;
	
	do
	{
		cout<<"\n";
		cout<<"1.Insert_Last "<<endl;
		cout<<"2.Insert_First"<<endl;
		cout<<"3.Delete "<<endl;
		cout<<"4.Insert_at_pos"<<endl;
		cout<<"5.Display"<<endl;
		cout<<"6.Exit"<<endl;
		cout<<"Enter the choice....";cin>>choice;
		
		switch(choice)
		{
			case 1 : vf.addElementLast(); break;
			
			case 2 : vf.addElementFirst(); break;
			
			case 3 : vf.deleteElementLast(); break;

			case 4 : vf.insertElementPos(); break;
						
			case 5 : vf.display(); break;
			
			case 6 : exit(0); break;
			
			default : cout<<"Enter valid choice \n";
		}
		
	}while(choice != 7);
	
	return 0;
}
