#include<iostream>
using namespace std;

class date
{
	private:int day,month,year;
	
	public:void displaydate()
	{
		cout<<"date is="<<day<<"-"<<month<<"-"<<year<<endl;
	}
	void assigndate(int d,int m,int y);
		
};

void date::assigndate(int d,int m,int y)    //outside declaration....
{
	cout<<"date is created:";
	
	day=d;
	month=m;
	year=y;
}
int main()
{
	date d;

	d.displaydate();  //garbage value...
	d.assigndate(4,4,2001);
    d.displaydate();
	}
