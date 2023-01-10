#include<iostream>
using namespace std;

int main(){
	
	int data[8]={2,16,17,88,101,200,301,1000};
	
	int left = 0;
	int right = 7;
	
	
	int number ;
	int status = 0;
	
	
	cout << " the number is " <<  "\n";
	cin >> number;
	
	
	while (left <= right){
	
		int mid = (left+right)/2;
	
	   if ( number == data[mid]) {
	   
		cout << " found";
		status = 1;
		break; 
	}
	
	 else if 
		(number < data[mid])
		right = mid -1;
		
		else 
		
		left = mid +1;
		
		}
		if (status ==0) 
		cout << " not found";
		
			return 0;
			
		}
