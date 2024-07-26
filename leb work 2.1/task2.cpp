#include<iostream>
using namespace std;
class car{
	public:
	 int car_id;
     char car_company_name[100];
     char car_color[100];
     char car_model[100];
     int car_release_year;
};
int main()
{
	car c[4];
	int i;
	for(i=0;i<4;i++)
	{
	    cout<<"Enter car's Id number = ";
	    cin>>c[i].car_id;
	    cout<<"Enter car's company name = ";
	    cin>>c[i].car_company_name;
	    cout<<"Enter car's color = ";
	    cin>>c[i].car_color;
	    cout<<"Enter car's model = ";
	    cin>>c[i].car_model;
	    cout<<"Enter car's release year = ";
	    cin>>c[i].car_release_year;
	    cout<<endl;
	}
	for(i=0;i<4;i++)
	{
		cout<<"car's Id number = "<<c[i].car_id<<endl;
		cout<<"car's company name = "<<c[i].car_company_name<<endl;
		cout<<"car's color = "<<c[i].car_color<<endl;
		cout<<"car's model = "<<c[i].car_model<<endl;
		cout<<"car's release year = "<<c[i].car_release_year<<endl;
	}
	return 0;
	
}