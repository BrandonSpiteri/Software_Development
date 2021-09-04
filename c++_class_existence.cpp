#include <iostream>
#include <string.h>
using namespace std;

class test_Class
{
	private:
		//static int count for Existence count
		static int count;
		
	public:
		// class constructor
		test_Class()
		{
			count++;
		}
		
		
		static int nobjs(void)
		{
			return count;
		}
};

//init count 
int test_Class::count =0;

//main function
int main()
{
    //create 4 instances
	test_Class c1;
	test_Class c2;
	test_Class c3;
	test_Class c4;
	
	//printing object count 
	cout << "Objects in Existence: " << test_Class::nobjs() << endl;
	
}