#include <stdio.h>
#include <bits/stdc++.h>

using namespace std;

int main() 
{
	int temp, testcase, arraySize;
	vector<int> vect;
	vect.reserve(100);
	
	cin>>testcase;
    while(testcase--)
    {
        cin>>arraySize;
	    
	    while(arraySize--)
	    {
	        cin>>temp;
	        vect.push_back(temp);
	    }
        
        if(vect.size() == 1)
        {
            cout<<"No Profit"<<endl;
            break;
        }
        
        int i=0;
        int count=0;
        while(i < vect.size() - 1)
        {
            while ((i < vect.size() - 1) && (vect[i + 1] <= vect[i])) 
            i++;
            
            if(i == vect.size() - 1 && count==0)
            {
            cout<<"No Profit";
            break;
            }
            
            if(i == vect.size() - 1)
            {
            break;
            }
            
            int buy = i++;
            
            while((i < vect.size()) && (vect[i] >= vect[i - 1]))
            i++;
            
            int sell = i-1;
            
            cout<<"("<<buy<<" "<<sell<<")"<<" ";
            count++;
            
        }
        
        cout<<endl;
        vect.clear();
    }
	return 0;
}