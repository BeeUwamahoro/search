#include<iostream>

using namespace std;

 

int data[16]={2, 7, 8, 11, 17, 18, 22, 100, 103, 250, 299, 300, 305, 309, 311, 400};

int value=100;

int status=0;

 

int search(int L, int R)
{

if(L<=R)

{

int M=(L+R)/2;

if (value==data[M])

{

cout<<"Found";

status=1;

//break;

}

else if (value>data[M])

search(M+1, R);

else      

search (L, M-1);

}

           

return 0;              

}

 

 

int main()

{

int L=0;

int R=15;


search(L, R);

if (status==0)

cout<<"Not found";

return 0;

}
