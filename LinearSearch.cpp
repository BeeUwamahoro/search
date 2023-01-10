#include<iostream>
using namespace std;

int main(){
	
	int data[8]={2,16,17,88,101,200,301,1000};
	
	int number = 200;
	int count = 0;
	int i = 0;
	int status = 0;
	
	while (i<8){
		
	count = count +1;
		
	if ( data [i] == number) {
	
	cout << "found \n";
	status = 1;

	
	cout << count;
	
		
	
}
  
     i = i+1;
	
	}
	
	if (status ==0) 
	
		cout << " not found \n";
		cout << count;
		
	
		

	
  
 	return 0;
}
