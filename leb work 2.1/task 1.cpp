#include<iostream>
using namespace std;
class Employee{
	public:
		int emp_id;
		char emp_name[100];
		int emp_age;
		char emp_role[100];
		int emp_salary;
		char emp_city[100];
		char emp_experience[10];
		char emp_company_name[100];
};
int main()
{
	Employee e[5];
	int i;
	for(i=0;i<5;i++)
	{
		cout<<"Enter your Id = ";
		cin>>e[i].emp_id;
		cout<<"Enter Your name = ";
		cin>>e[i].emp_name;
		cout<<"Enter Your Age = ";
		cin>>e[i].emp_age;
		cout<<"Enter Your role = ";
		cin>>e[i].emp_role;
		cout<<"Enter Your Salary = ";
		cin>>e[i].emp_salary;
		cout<<"Enter Your city = ";
		cin>>e[i].emp_city;
		cout<<"Enter Your Experience = ";
		cin>>e[i].emp_experience;
		cout<<"Enter Your company name = ";
		cin>>e[i].emp_company_name;
		cout<<endl;
	}
	for(i=0;i<5;i++)
	{
		cout<<"Your Id = "<<e[i].emp_id<<endl;
		cout<<"You name = "<<e[i].emp_name<<endl;
	    cout<<"You Age = "<<e[i].emp_age<<endl;
	    cout<<"You role = "<<e[i].emp_role<<endl;
	    cout<<"You slary = "<<e[i].emp_salary<<endl;
	    cout<<"You city = "<<e[i].emp_city<<endl;
	    cout<<"You experience = "<<e[i].emp_experience<<endl;
	    cout<<"You company name = "<<e[i].emp_company_name<<endl;
	}
	return 0;
}