#include <iostream>
using namespace std;
int mul();
void passbyvalue(int num)
{
	num=num+10;
	cout<<"Inside Function (pass by value): "<<num<<endl;
}

int main()
{
	int numl;
	int sum;
	
	int number=5;
	int num=10;
     cout<<" Before Function Call: "<< number <<endl;
    passbyvalue(number);
    cout<<"After Function Call: "<< number <<endl;
    num=num-10;
    cout<<"Inside Function (pass by value): "<<num<<endl;
    num=num*10;
    cout<<"Inside Function (pass by value): "<<num<<endl;
    return 0;
}


