#include<iostream>
#include<string>
#include<stdlib.h>
#include<string.h>
//#include"str.cpp"

using namespace std;

int sum(int x,int y)
{
	return x + y;
}

class Sales_item
{
	public:
		std::string isbn;
		unsigned units_sold;
		double revenue;
		int* var;
		
	public:
		double avr_price() const;
		
		bool same_isbn(const Sales_item &rhs)const
		{
			return isbn == rhs.isbn;
		}
	
};

double Sales_item::avr_price() const
{
	return 0;
}

// int stringlen(string str)
// {
//     int i =0;
//     string *count;
//     while(str[i])
//     {

//         ++i;
//     }
//     return i;
// }

int main()
{
	char * a1="";
	//char * a2='';
	char * a3="null";

	char * a4=NULL;
	//char   a5[]='';
	//char   a6[]=NULL;
	char   a7[]="NULL";
	//char   a8[10]=NULL;
	char   a9[10]="NULL";
	//char   *a10=null;
	//char   *a10[10]="NULL";
	//char   a10[10]=NULL;
	//char   *a10[10]="NULL";
	string	a10="nulls";

	Sales_item item1,item2;
	item1.isbn = "4564-788";
	item1.units_sold = 10;
	item1.revenue = 300;
	int temp[] ={200,300};
	item1.var = temp;

	int & tdi = temp[1];

	item2.isbn = "4564-788";
	item2.units_sold = 2;
	item2.revenue = 70;
	
	if(item1.same_isbn(item2))
	{
		cout << "there are the same books"<< endl;
	}
	else
	{
		cout << "there are not the same books"<< endl;
	}

	cout << item1.var << endl;
	cout << *item1.var << endl;
	cout << endl;
	
	cout << (item1.var) << endl;
	cout << *(item1.var+1) << endl;
	cout << *item1.var+1 << endl;
	cout << endl;

	cout << tdi << endl;

	cout << &tdi << endl;
	cout << &tdi+1 << endl;	
	cout << tdi+1 << endl;	
	cout << endl;

	//a4 = "";
	// 1 3 4 7 9 
	//cout << "test print a  "<< a3 << " length:" << stringlen(a10) << endl;	


	system("pause");
}
