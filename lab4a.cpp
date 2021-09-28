 #include <iostream>
using namespace std;

int main()
{
	int num_cookies;
 	 int num_dozen;
        float total_cost;
        const float STANDARD_PRICE = 0.89;
	int discount;

        cout << "Enter the number of cookies you would like: ";
        cin  >> num_cookies;

        num_dozen = num_cookies / 12; // interger division, do not change 
        // use an if-else if-else to calculate the total cost 
        // of the order based on the number of dozen cookies ordered 
	if(num_cookies>0 && num_cookies<12)
{
//calculating total_cost by multiplying std_price with n
total_cost=STANDARD_PRICE*num_cookies;
cout<<"Total Cost=:"<<total_cost<<"\n";
cout<<"Net cost(No discount):"<<total_cost<<"\n";
}
//Checking for the number of dozens to give the discount
else if(num_cookies>=12 && num_cookies<60)
{
//calculating total_cost by multiplying std_price with n
total_cost=STANDARD_PRICE*num_cookies;
cout<<"Total Cost=:"<<total_cost<<"\n";
//calculating 10 % of the total_cost
discount=total_cost*0.1;
cout<<"Discount(10\%):"<<discount<<"\n";
//Calculating total_cost after discount.
total_cost=total_cost-discount;
cout<<"Net cost after discount:"<<total_cost<<"\n";
}
//Checking for the number of dozens to give the discount
else if(num_cookies>=60)
{
//calculating total_cost by multiplying std_price with n
total_cost=STANDARD_PRICE*num_cookies;
cout<<"Total Cost=:"<<total_cost<<"\n";
//calculating 25 % of the total_cost
discount=total_cost*0.25;
cout<<"Discount(25\%):"<<discount<<"\n";
//Calculating total_cost after discount.
total_cost=total_cost-discount;
cout<<"Net cost after discount:"<<total_cost<<"\n";
}
else
cout<<"Invalid number of cookies"<<endl;



	return 0;
}

