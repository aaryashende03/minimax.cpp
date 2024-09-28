#include<iostream>
using namespace std;
class minimax
{
	public:
	          
			void findminimax(int arr[] , int n)
			{
				for(int i =0 ; i<n ; i++)
				{
					if(arr[i]<mini)
					{
						mini = arr[i];
					}
					else if(arr[i]<max)
					{
						arr[i] = max;
					}
				}
			}
			
};

int main()
{
	minimax obj1;
	int arr[] = {11,22 ,33 };
	
    int n = sizeof(arr)/sizeof(arr[0]);

     obj1.findminimax(arr , n);
	 return 0;
}
