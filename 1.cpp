#include<iostream>
#include<conio.h>


using namespace std;

int main()
{
int n, i, sn, ln, arr[10], sum=0;
double ave;	n=10;
	
	
	
	
	for(i=0; i<n; i++)
	{
		cout<<"Enter a number: ";
		cin>>arr[i];
	}
	
	
	
	sn=arr[0];
	ln=arr[0];
	
	for(i=1; i<n; i++)
	{
		if(arr[i]<sn)
			sn=arr[i];
		if(arr[i]>ln)
		ln=arr[i];
	}
	
	
	
	
	for(i=0; i<n; i++)
	{
		sum+=arr[i];
	}
	
	
	
	
	ave=(double)sum/n;
	cout<<"The largest number is "<<ln
	<<endl;
	cout<<"The smallest number is "<<sn
	<<endl;
	cout<<"The total sum  is: "
	<<sum<<endl;
	cout<< "The total average is: "
	<<ave;
		
	getch();
	return 0;
}
