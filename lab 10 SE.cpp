#include <iostream>
using namespace std;

void passbyvalue(int num)
{
	num=num+10;
	cout<<"Inside Function (pass by value): "<<num<<endl;
}
int main(){
	int number = 5;
    cout<<" Before Function Call: "<< number <<endl;
    passbyvalue(number);
    cout<<"After Function Call: "<< number <<endl;
    return 0;
}
    
    