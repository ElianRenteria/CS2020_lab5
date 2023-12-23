//Elian Renteria
//CSE2020
// lab05.cpp
#include <string>
#include "LinkedList.cpp"
#include "Employee.cpp"
int main()
{
  int x;
  LinkedList<int> intll;
  cout << "create a list of integers: ";
  cin >> x;
  while(x!=0)
  {
    intll.push_front(x);
    cout << " ";
    cin >> x;
  }
  cout << "\nThe size of the linked list is: " << intll.get_size() << "\n";
  intll.print();
  int key;
  cout << "\nEnter the key: ";
  cin >> key;
  cout << "\nis key in the list? " << intll.find(key)<< endl;
  int k;
  cout << "\nHow many values do yout want to remove? ";
  cin >> k;
  while(!intll.empty() && k>0)
  {
    intll.pop_front();
    k--;
  }
  cout << "\nThe list is:\n";
  intll.print();
//string linkedlist
  LinkedList<string> strll;
  string s;
  cout << "\nCreate a list of string: ";
  cin >> s;
  while(s != "exit")
  {
    strll.push_front(s);
    cout << " ";
    cin >> s;
  }
  cout << "\nThe size of the linked list is: " << strll.get_size() << "\nThe linked list is:\n";
  strll.print();
  cout << "\nHow many values do you want to remove? ";
  cin >> k;
  while(!strll.empty() && k>0)
  {
    strll.pop_front();
    k--;
  }
  cout << "\nThe linked list is:\n";
  strll.print();
//employee linked list
  LinkedList<Employee> empll;
  cout << "\nCreate a list of employees:\n";
  int id = -1;
  string name,dept;
  cout << "\nEnqueue employee id, name, dept (enter id 0 to stop): ";
  cin >> id;
  cout << " ";
  cin >> name;
  cout << " ";
  cin >> dept;
  while(id != 0)
  {
    Employee e(id, name, dept);
    empll.push_front(e);
    cout << "\nEnqueue employee id, name, dept (enter id 0 to stop): ";
    cin >> id;
    cout << " ";
    cin >> name;
    cout << " ";
    cin >> dept;
  }
  cout << "\nThe size of the linked list is: " << empll.get_size() << "\nThe linked list is:\n";
  empll.print();
  cout << "\nHow many values do you want to remove? ";
  cin >> k;
  while(!empll.empty() && k>0)
  {
    empll.pop_front();
    k--;
  }
  cout << "\nThe linked list is:\n";
  empll.print();
  return 0;
}