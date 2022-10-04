#include<iostream>
using namespace std;
int main()
{
   float qty, price, total, discount;
   cout<<"enter qty and price";
    cin>>qty>>price;
   total=qty*price;
   if(total>1000)
   {
   	discount=0.1*total;
   	cout<<"discount amount:"<<discount;
   	total=total-discount;
   }
   cout<<"amount to be paid"<<total;
}
