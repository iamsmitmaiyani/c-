#include<iostream>
using namespace std;
class company{
	private:
	int comp_id;
	char comp_name[100];
	int comp_staff_quantity;
	int comp_revenue;
	int comp_import_raw_diamonds;
	int comp_export_diamonds;
	char comp_ceo[100];
public:
	void setData()
	{
		cout<<"Enter Company Id = ";
		cin>>comp_id;
			cout<<"Enter Company Name = ";
		cin>>comp_name;
			cout<<"Enter Company staff quantity = ";
		cin>>comp_staff_quantity;
			cout<<"Enter Company revenue = ";
		cin>>comp_revenue;
			cout<<"Enter Company import raw diamonds = ";
		cin>>comp_import_raw_diamonds;
			cout<<"Enter Company export diamonds = ";
		cin>>comp_export_diamonds;
			cout<<"Enter Company CEO = ";
		cin>>comp_ceo;
	}
	void getData()
	{
	
		cout<<"Compny Id = "<<comp_id<<endl
		    <<"Company Name = "<<comp_name<<endl
		    <<"Company staff quantity = "<<comp_staff_quantity<<endl
		    <<"Company Revenue = "<<comp_revenue<<endl
		    <<"Company import raw diamond = "<<comp_import_raw_diamonds<<endl
		    <<"Company export diamond = "<<comp_export_diamonds<<endl
		    <<"Company CEO = "<<comp_ceo<<endl;
	}
	 
};
int main()
{
	int n;
	cout<<"How many data enter = ";
	cin>>n;
	company c[n];
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