#include<iostream>

using namespace std;

class admin{
	
	public:
	char company_name[100];
	
	protected :
    int manager_salary;
	int employee_salary;
	
	private:
	int total_staff;
 	int total_annual_revenue;
	int  can_terminate;
	
	public:
		
	void myAccess()
	{
		cout<<"Company name:-";
		cin>>company_name;
		cout<<"total staff:-";
		cin>>total_staff;
		cout<<"total annual revenue:-";
		cin>>total_annual_revenue;
		cout<<"can_terminate:-";
		cin>>can_terminate;
		

		cout<<"Company name:-";
		cout<<company_name<<endl;
		cout<<"total staff:-";
		cout<<total_staff<<endl;
		cout<<"total annual revenue:-";
		cout<<total_annual_revenue<<endl;
		cout<<"can_terminate:-";
		cout<<can_terminate<<endl<<endl;
	}
	
};

class manager : public admin{
	
	public:
	void myAccess()
	{
		cout<<"Company name:-";		
		cin>>company_name;
		cout<<"manager_salary:-";		
		cin>>manager_salary;
		
		
		cout<<"Company name:-";
		cout<<company_name<<endl;
		cout<<"manager_salary:-";		
		cout<<manager_salary<<endl<<endl;
	}
};

class employee  : public manager{
	public:
		
	void myAccess()
	{
		cout<<"Company name:-";		
		cin>>company_name;
		cout<<"employee_salary:-";		
		cin>>employee_salary;
		
		
		cout<<"Company name:-";
		cout<<company_name<<endl;
		cout<<"employee_salary:-";		
		cout<<employee_salary<<endl<<endl;
	}
	
};

main()
{
	admin obj1;
	obj1.myAccess();
	
	manager obj2;
	obj2.myAccess();
	
	employee obj3;
	obj3.myAccess();

	
} 
