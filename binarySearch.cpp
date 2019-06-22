#include<iostream>
using namespace std;

int bsearch(int a[],int l,int h,int key){
	if(l<h){
		int mid=l+(h-l)/2;
		if(a[mid]==key)
			return mid;
		else if(a[mid]<key){
			return bsearch(a,mid+1,h,key);
		}
		else{
			return bsearch(a,l,mid-1,key);
		}
	}
	return -1;
}
int main(){
	int n,i;
	std::cin>>n;
	int a[n];
	for(i=0;i<n;i++)
		std::cin>>a[i];
	int res,key;
	std::cout<<"Enter key to search\n";
	std::cin>>key;
	res=bsearch(a,0,n,key);
	if(res>=0)
		std::cout<<"Element found at "<<res;
	else
		std::cout<<"Element not found\n";
	return 0;
}
