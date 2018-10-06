#include<iostream>
#include<string.h>
using namespace std;

class Invoice{
public:
  Invoice()
  {

  }

  Invoice(string part_num , string part_des , int quantity , double price)
  {
    part_number = part_num;
    part_description = part_des;
    item_quantity = quantity;
    item_price = price;
  }

  void set_part_number(string num)
  {
    part_number = num;
  }

  void set_part_description(string description)
  {
    part_description = description;
  }

  void set_item_quantity(int quantity)
  {
    item_quantity = quantity;

    if(item_quantity<0)
      item_quantity = 0;
  }

  void set_item_price(double price)
  {
    item_price = price;

    if(item_price<0)
      item_price =0.0;
  }

  string get_part_number()
  {
    return part_number;
  }

  string get_part_description()
  {
    return part_description;
  }

  int get_item_quantity()
  {
    return item_quantity;
  }

  double get_item_price()
  {
    return item_price;
  }

  double getInvioceAmount()
  {
    double amount = item_quantity * item_price;
    return amount;
  }


private:
  string part_number , part_description;
  int item_quantity;
  double item_price;

};

int main() {

  string num , description;
  int quantity;
  double price;

  Invoice B1("lbcdbc" , "this is a screw driver" , 4 , 50) , B2;

  cout << "enter part number of item-2 = ";cin >> num;
  cout << "enter description of item-2 = ";cin >> description;
  cout << "enter quantity of item-2 = ";cin >> quantity;
  cout << "enter price of item-2 = ";cin >> price;

  cout << "********************** */" << '\n';
  cout << "********************** */" << '\n';

  B2.set_part_number(num);
  B2.set_part_description(description);
  B2.set_item_quantity(quantity);
  B2.set_item_price(price);

  cout << "part number of item-1 is : " << B1.get_part_number() << '\n';
  cout << "part description of item-1 is : " << B1.get_part_description() << '\n';
  cout << "quantity of item-1 is : " << B1.get_item_quantity() << '\n';
  cout << "price of item-1 is : " << B1.get_item_price() << '\n';

  cout << "********************** */" << '\n';
  cout << "********************** */" << "\n\n";

  cout << "part number of item-2 is : " << B2.get_part_number() << '\n';
  cout << "part description of item-2 is : " << B2.get_part_description() << '\n';
  cout << "quantity of item-2 is : " << B2.get_item_quantity() << '\n';
  cout << "price of item-2 is : " << B2.get_item_price() << '\n';

  cout<<endl;

  cout << "Invoice Amount of item-1 is : " << B1.getInvioceAmount() << '\n';
  cout << "Invoice Amount of item-2 is : " << B2.getInvioceAmount() << '\n';
  return 0;
}
