          //CODESOFT  INTERSHIP
          //Domain Name - C++ Programming
          //Task - 2 (Forming a calculator)
          //Intern Name - MANJU KUMARI
          //Batch - AUGUST Batch 4


#include<iostream>
using namespace std;
int main()
{
	int num1 , num2 , k ;
    float result ;
    cout << "Enter two number" << endl;
	cout << "First number:" << endl ;
	cin >> num1;
	cout << "Second number:" << endl ;
	cin >> num2 ;
	cout << "Choose operator:" << endl  ;
	cout << "1 for add, 2 for subtract, 3 for multiple, 4 for divide" << endl ;
	cin >> k ;
	
	switch(k)
    {
	case 1:
       result = num1 + num2;
	   cout << num1 << " + " << num2 << " = " << result ;
	   break;
	case 2:
       result = num1 + num2 ;
	   cout << num1 << " - " << num2 << " = " << result ;
	   break;
	case 3:
       result = num1 * num2;
	   cout << num1 << " * " << num2 << " = " << result ;
	   break;
	case 4:
       result = num1 / num2;
	   if (num2 != 0)
	   cout << num1 << "/" << num2 << "=" << result ;
	   else 
	   cout << " undefined :" <<endl ;
	   break;
	default:
		cout << "Invalid Entry" << endl;
	}
    cout << "\nCalculation done" << endl;
	return 0;
}