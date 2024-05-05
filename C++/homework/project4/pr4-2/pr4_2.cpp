// This program uses an array of PayInfo to hold payroll data.
#include <iostream>
#include <iomanip>
using namespace std;

/* The PayInfo class consists of a default constructor and multiple
accessor and mutator functions. */
class PayInfo// Define a class that holds 2 variables
{
	private:
		int hours;// Hours worked
		double payRate;// Hourly pay rate

	public:
		PayInfo()//default constructor setting all variables to 0
		{
			hours = 0, payRate = 0.0;
		}

		void setHours(int hr)//sets hours variable to parameter hr
		{
			hours = hr;
		}

		void setpayRate(double pr)//sets payRate to parameter pr
		{
			payRate = pr;
		}

		int getHours()//returns an integer variable with value of hours
		{
			return hours;
		}
		
		double getPayRate()//returns a double variable with value of payRate
		{
			return payRate;
		}

		double getGrossPay()//calculates and returns the total pay with overtime
		{
			if (hours > 40)//checks if overtime is applicable
				return (payRate * 40 + ((payRate*1.5) * hours-40));
			else
				return (payRate * hours);
		}
};

int main()
{
    const int NUM_EMPS = 3;      // Number of employees   
    PayInfo workers[NUM_EMPS];   // Define an array of PayInfo objects


	// Get payroll data
	cout << "Enter the hours worked and hourly pay rates of "
	     << NUM_EMPS << " employees. \n"; 

	for (int i = 0; i < NUM_EMPS; i++)
	{	
		//input variables to store input to enter in object array
		int hr;
		double payrate;

		cout << "\nHours worked by employee #" << (i+1) << ": ";
		cin >> hr;
		workers[i].setHours(hr);//uses function to set PayFnfo object's hours
		cout << "Hourly pay rate for this employee: $";
		cin >> payrate;
		workers[i].setpayRate(payrate);
		//uses function to set PayFnfo object's pay rate
	}
	// Display each employee's gross pay
	cout << "\nHere is the gross pay for each employee:\n";
	cout << fixed << showpoint << setprecision(2);

	for (int x = 0; x < NUM_EMPS; x++)
	{
		cout << "Employee #" << (x + 1);
		cout << ": $" << setw(7) << workers[x].getGrossPay() << endl;
		//uses getGrossPay function in order to calculate total pay
	}
	return 0;
}