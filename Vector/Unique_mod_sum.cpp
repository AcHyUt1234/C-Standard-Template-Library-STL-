#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void uniqueOccurrences(vector<int>& arr)
{
	vector<int>vec;
	int sum = 0;
        int i=0,j=arr.size()-1;
        while(i<=j) //Using the two-pointer approach at extreme ends
        {
            if(abs(arr[i])!=abs(arr[j]))
            { 
                vec.push_back(abs(arr[i]));
                vec.push_back(abs(arr[j]));
            }
            else if(abs(arr[i])==abs(arr[j]))
            vec.push_back(abs(arr[i]));
            
            while(i<arr.size() && abs(arr[i])==abs(arr[i+1]))
            i++;
            while(j>=0 && abs(arr[j])==abs(arr[j-1]))
            j--;
            
            i++;
            j--;
        }
        
        for(auto a:vec)
        {
            sum += a;
        }
        
        cout<<sum;
}

int main() 
{
	vector<int> arr;
	int n, x;
	cin>>n; //Number of elements in vector
	for(int i=0; i<n; i++)
	{
	    cin>>x;
	    arr.push_back(x);
	}
	
	uniqueOccurrences(arr); //Calculating the sum of mod of unique values in the vector
	return 0;
}
