#include<iostream>
using namespace std;
int main()
 {
	//code
	int T; //Testcases
cin>>T;
while(T--){
    int n; //Array size
    cin>>n;
    int arr[n]; //Array
    // For loop to input array
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // For loop to reverse the array
    for(int i=0;i<n/2;i++){
        int temp = arr[i];
        arr[i] = arr[n-1-i];
        arr[n-1-i] = temp;
    }
    // For loop to output reversed array
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
	return 0;
}