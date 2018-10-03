#include<iostream>
#include<string.h>
using namespace std;

class Employee{
public:
  Employee()
  {

  }
  Employee(string first , string last , double m_salary)
  {
    first_name=first;
    last_name =last;
    monthly_salary=m_salary;
  }



  void set_first_name(string first)
  {
    first_name=first;
  }
  void set_last_name(string last)
  {
    last_name=last;
  }
  void set_monthly_salary(double m_salary)
  {
    monthly_salary=m_salary;

    if(monthly_salary<0)
      monthly_salary=0.0;
  }

  string get_first_name()
  {
    return first_name;
  }
  string get_last_name()
  {
    return last_name;
  }
  double get_monthly_salary()
  {
    return monthly_salary;
  }
  double get_yearly_salary()
  {
    double yearly_salary=monthly_salary*12;
    return yearly_salary;
  }
  double get_raise()
  {
    double raise_salary=get_yearly_salary()*0.1;
    raise_salary=raise_salary+get_yearly_salary();
    return raise_salary;
  }

private:
  string first_name,last_name;
  double monthly_salary;
};

int main() {
  string first , last;
  double m_salary , yearly_salary;

  //Employee f();
  Employee e1("mohsin" , "sheikh" , 100), e2;

  cout << "enter first name of Employee-2: ";cin >> first;
  cout << "enter last name of Employee-2 : ";cin >> last;
  cout << "enter monthly salary of Employee-2 : ";cin >> m_salary;

  cout << "********************** */" << '\n';
  cout << "********************** */" << '\n';


  e2.set_first_name(first);
  e2.set_last_name(last);
  e2.set_monthly_salary(m_salary);

  cout << "first name of Employee-1 : " << e1.get_first_name()<<"\n";
  cout << "last name of Employee-1 : " << e1.get_last_name()<<"\n";
  cout << "monthly salary Employee-1 : " << e1.get_monthly_salary()<<"\n\n";

  cout << "/* ********************** */" << '\n';
  cout << "/* ********************** */" << '\n';



  cout << "first name of Employee-2 : " << e2.get_first_name()<<"\n";
  cout << "last name of Employee-2 : " << e2.get_last_name()<<"\n";
  cout << "monthly salary Employee-2 : " << e2.get_monthly_salary()<<"\n\n\n";

  //yearly_salary= e1.get_yearly_salary();
  cout << "yearly salary of Employee-1 : " <<e1.get_yearly_salary()<<"\n";
  cout << "yearly salary of Employee-1 with raise: " << e1.get_raise()<<"\n";

  cout << "/* ********************** */" << '\n';
  cout << "/* ********************** */" << '\n';

  //yearly_salary= e2.get_yearly_salary();
  cout << "yearly salary of Employee-2 : " <<e2.get_yearly_salary()<<"\n";
  cout << "yearly salary of Employee-2 with raise: " << e2.get_raise()<<"\n";




  return 0;
}
