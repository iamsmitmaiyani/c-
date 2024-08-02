#include<iostream>
using namespace std;
class cafe{
	private:
	int cafe_id;
	char cafe_name[100];
	char cafe_type[100];
	char cafe_rating[100];
	char cafe_location[100];
	int cafe_establish_year;
	int cafe_staff_quantity;
public:
	void setData()
	{
		cout<<"Enter cafeid = ";
		cin>>cafe_id;
			cout<<"Enter cafe name = ";
		cin>> cafe_name;
			cout<<"Enter cafe type = ";
		cin>>cafe_type;
			cout<<"Enter cafe_rating = ";
		cin>>cafe_rating;
			cout<<"Enter cafe location = ";
		cin>>cafe_location;
			cout<<"Enter cafe establish year = ";
		cin>>cafe_establish_year;
			cout<<"Enter  cafe staff quantity = ";
		cin>> cafe_staff_quantity;
	}
	void getData()
	{
	
		cout<<"cafe id = "<<cafe_id<<endl
		    <<" cafe name = "<< cafe_name<<endl
		    <<"cafe type = "<<cafe_type<<endl
		    <<"cafe rating = "<<cafe_rating<<endl
		    <<"cafe location= "<<cafe_location<<endl
		    <<"cafe establish year = "<<cafe_establish_year<<endl
		    <<" cafe staff quantity = "<< cafe_staff_quantity<<endl;
	}
	 
};
int main()
{
	int n;
	cout<<"How many data enter = ";
	cin>>n;
	cafe c[n];
	for(int i=0;i<=n;i++)
	{
		c[i].setData();
	}
	for(int i=0;i<=n;i++)
	{
		c[i].getData();
	}
	return 0;
	
	
}