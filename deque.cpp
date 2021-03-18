/*Dequeue - Double ended queue wherer element are added and deleted from both the ends
			to use the functionality of the you have to include<deque> header file
			 
*/
#include<iostream>
#include<deque>
using namespace std;

class DequeFunctionality
{
	private:
		deque<int> dq;
		int data;
	
	public:
		void InsertLast()
		{
				cout<<"Enter the number : ";cin>>data;
				dq.insert(dq.end(),data);
			
		}
		void InsertFront()
		{
			cout<<"Enter the number : ",cin>>data;
			dq.insert(dq.begin(),data);	
		}
		
		void deleteLast()
		{
			dq.pop_back();
		}
		
		void deleteFirst()
		{
			dq.pop_back();	
		}
		
		void InsertAtpos()
		{
			int pos;
			cout<<"Enter the postion : ";cin>>pos;
			cout<<"Enter the data : ";cin>>data;
			
			if(pos > dq.size())
				dq.insert(dq.end(),data);
			else
				dq.insert(dq.begin()+pos,data);
				
		}
		
		void DeleteAtPos()
		{
			int pos;
			cout<<"Enter the position : ";cin>>pos;
			
			if(pos > dq.size())
				cout<<"Invalid position : range out of bound\n";
			else
				dq.erase(dq.begin()+pos);
		}
		
		void display()
		{
			cout<<"Deque elements : ";
			for(int i=0; i < dq.size(); i++)
			{
				cout<<dq[i]<<" -- ";
			}
			cout<<endl;
		}
};

int main()
{
	int choice;
	DequeFunctionality df;
	
	do
	{
		cout<<endl;
		cout<<"1. InsertLast...\n";
		cout<<"2. InsertFirst..\n";
		cout<<"3. InsertAtPos..\n";
		cout<<"4. DeleteLast...\n";
		cout<<"5. DeleteFirst..\n";
		cout<<"6. DeleteAtPos..\n";
		cout<<"7. Display Deque\n";
		cout<<"8. Exit\n";
		cout<<"Enter the choice...\n";
		cin>>choice;
		
		switch(choice)
		{
			case 1 : df.InsertLast(); break;
			
			case 2 : df.InsertFront(); break;
			
			case 3 : df.InsertAtpos(); break;
			
			case 4 : df.deleteLast(); break;
			
			case 5 : df.deleteFirst(); break;
			
			case 6 : df.DeleteAtPos(); break;
			
			case 7 : df.display(); break;
			
			case 8 : exit(0); break;
			
			default : cout<<"Enter valid choice \n";
		}
	}while(choice != 9);
	
	return 0;
}
