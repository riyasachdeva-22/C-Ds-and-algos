/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <algorithm>
#include <vector>
#include<algorithm>
using namespace std;
 bool f(int x,int y)
 {
     return x>y;
 }
 int main()
 {
 	vector<int>v={10,1,1,1,2,30};
 	cout<<v[1]<<endl;
 	cout<<v[3]<<endl;
 	sort(v.begin(),v.end()); //O(Nlogn)
 	bool p=binary_search(v.begin(),v.end(),20);
 	cout<<p;
 	cout<<"l nd u"<<endl;
 //	vector<int>::iterator it1=lower_bound(v.begin(),v.end(),1);//>=
 //	vector<int>::iterator it2=upper_bound(v.begin(),v.end(),1);//>
 	
 	auto it1=lower_bound(v.begin(),v.end(),1);//>=
 	auto it2=upper_bound(v.begin(),v.end(),1);//>
 	cout<<*it1<<endl<<*it2<<endl;
 	cout<<it2-it1<<endl;//frequency
 	cout<<"enter";
 	vector<int>v1;
 	for(int i=0;i<5;i++)
 	{
 	    int num;
 	    cin>>num;
 	    v1.push_back(num);
 	}
 	cout<<"elemnts";
 	for(int x:v1) //print vector
 	cout<<x<<endl;
 	//sort in desc
 	cout<<"sort"<<endl;
 	sort(v1.begin(),v1.end(),f);//sort in desc
 	vector<int>::iterator it3;
 	for(it3=v1.begin();it3!=v1.end();it3++)//print vector
 	{
 	    cout<<*it3<<endl;
 	}
 	//update value nd iterate by ref
 	cout<<"v"<<endl;
 	for(int &y:v)
 	{
 	    y++;
 	    cout<<y<<endl;
 	}
 	
 	
 	
 }
