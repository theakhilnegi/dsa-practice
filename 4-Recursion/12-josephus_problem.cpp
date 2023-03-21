 #include <iostream>
 using namespace std;
 
 int func(int n, int k){
	if(n==1){
		return 0;
	}
	return (func(n-1,k)+k)%n;
 }
 
 int main(){
	int n,k;
	cout<<"Enter N and K: "; 
	cin>>n>>k;
	int a[n];
	for (int i = 0; i < n; i++) 
	{
		a[i]=i;
	}
	cout<<func(n,k);
	return 0;
 }