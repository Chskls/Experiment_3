#include <iostream>
#include <conio.h>
using namespace std;
int main(){
	int size;
	char arr[100],i,x,number;
	cout <<"Enter the size of your array:";cin>>size;
	cout<<"Enter your array elements:"<<endl;
	
	
	
	for (i=0; i<size; i++)
	{
		cin>>arr[i];
	}
	cout<<"Sorting array using selection sort.."<<endl;




	for(i=0; i<size; i++)
	{
	for (x=i+1;i<size;i++)
	{
	for(x=i+1;x<size;x++)
	{
	if (arr[i]>arr[x])
	{
	number=arr[i];
	arr[i]=arr[x];
	arr[x]=number;
	}
	}
	}
	}
	
	cout<<"The output should be: {";
	for (i=0;i<size;i++)
	{
	cout<<arr[i]<<",";
	}
	
	cout<<"}"<<endl;
	cout<<"The size of the array is:"<< size;
	
getch();
return 0;
}
