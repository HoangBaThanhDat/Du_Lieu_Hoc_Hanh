#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,arr[100];
    cin>>n;
	while(n--){
	long long t=7;
	for(int i=0;i<t;i++){
		cin>>arr[i];
    } 
    for (int i = 0; i < t-1; i++){
       for (int j = i+1; j < t; j++){
           if(arr[i] > arr[j])
               swap(arr[i], arr[j]);
       }
   }
	cout<<arr[0]<<" "<<arr[1]<<" "<<arr[6]-(arr[0]+arr[1]);
    cout<<endl;
	}
    return 0;
}
