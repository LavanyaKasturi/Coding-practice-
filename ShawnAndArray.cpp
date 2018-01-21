// Problem Statement :
// https://harshgangwar.wordpress.com/2018/01/21/shawn-and-arrays/

#include <bits/stdc++.h>
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	long n, t;
	long arr1[10000];
	long arr2[10000];
	cin >> t;
	long flag = 0;
	long index = 0;
	while (t > 0)
	{ 
	   cin >> n;
		for (long i =0; i<n; i++){
			cin >> arr1[i];
		}
		for(long j=0; j<n; j++){
			cin >> arr2[j];
		}

        sort(arr1,  arr1+n);
        sort(arr2, arr2+n);
    flag =0;
	for(long k =0; k<n; k++){
		if(arr1[k] != arr2[k]){
			flag ++;
			index = k;
		}
 	}

 	if(flag == 0){
 		cout << "Yes"<< '\n';
 	}
 	else if(flag == 1){
 		if(arr1[index] > arr2[index]){
 			cout << arr1[index]-arr2[index] << " " << 2 << '\n';
 		}
 		else if(arr2[index] > arr1[index]){
 			cout << arr2[index]-arr1[index] << " " << 1 << '\n';
 		}
 	}
 	
 	else{
 		cout << "No" <<  '\n';

 	}
    
    t--;
	}
      
    return 0;
}
