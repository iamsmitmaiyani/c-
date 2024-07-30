#include<iostream>
using namespace std;
class customer{
	private:
		int cust_id;
		char cust_name[100];
		int cust_age;
		char cust_city[100];
		int cust_mobile_number;
		char cust_simcard_validity[100];
		char cust_telecom_brand_name[100];
		public:
			void setData()
			{
				cout<<"Enter customer Id = ";
				cin>>cust_id;
				cout<<"Enter customer Name = ";
				cin>>cust_name;
				cout<<"Enter customer Age = ";
				cin>>cust_age;
				cout<<"Enter customer City = ";
				cin>>cust_city;
				cout<<"Enter customer Mobile number = ";
				cin>>cust_mobile_number;
				cout<<"Enter customer Simcard validity = ";
				cin>>cust_simcard_validity;
				cout<<"Enter customer telecom brand name = ";
				cin>>cust_telecom_brand_name;
			}
			void getData()
			{
				cout<<"Customer Id = "<<cust_id<<endl
				    <<"Customer Name = "<<cust_name<<endl
				    <<"Customer Age = "<<cust_age<<endl
				    <<"Customer City = "<<cust_city<<endl
				    <<"Customer Mobile Number = "<<cust_mobile_number<<endl
					<<"Customer simcard validity = "<<cust_simcard_validity<<endl
					<<"Customer telecom brand name = "<<cust_telecom_brand_name<<endl;
			}
};
int main()
{
	customer c[5];
	for(int i=0;i<=5;i++)
	{
		c[i].setData();
	}
	for(int i=0;i<=5;i++)
	{
		c[i].getData();
	}
}