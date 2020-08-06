#include<iostream>
#include<cmath>
using namespace std;
int Jumpsearch(int arry[100], int num, int item) {
	int count= 1;//steps counting variable
	int l = 0;
	int r = sqrt(num);//suitable jump size is (10)

	//implementing jump search
	while (arry[r+1] <= item && r < num) 
	{
		count++;
		l = r+1;
		r += sqrt(num);
		if (r+1 > num - 1) 
		{   int y=r+1;
			y= num;
		}
	}
	
	if (item == r) //if the floor number is 10 add nine trail again
	{
		return count + 9;
	}

	
	for (int i = l; i < r; i++)//retuning number of steps
	 {
		count++;
		if (arry[i] == item) {
			return count;
		}

	}

}
int main() 
{
	int arry[100];//Declare array size of 100
	for (int i = 0; i < 100; i++) //use to asign floor numbers to array
	{
		arry[i] = i+1;
	}

	
	for (int i = 1; i <= 100; i++) //here call the jump search funtion for all floors 0-100
	{
		int steps = Jumpsearch(arry, 100, i);
	//	if(i==100)//display only the answer
		cout <<"The trails for "<<i<<" floor is = "<<steps << endl;
	}

	return 0;

}
