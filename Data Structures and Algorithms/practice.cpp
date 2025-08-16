#include <iostream>
#include <stack>
#include <vector>
#include <string>
#include<bits/stdc++.h>
using namespace std ;


int main() {
    // Example input
    
    string s1 = "({()}({}[]))[{}]" ;
	vector<string> s(3,"") ;
    int n = s1.size() ;
    
    for(int j = 0 , i = 0 ; i < n ; i++){
    	
    	if(s1[i] == '(' || s1[i] == '{' || s1[i] == '['){
    		s[j] = s[j] + s1[i] ;
    		
    		j++ ;
		}else if(s1[i] == ')' || s1[i] == '}' || s1[i] == ']'){
    		j-- ;
			s[j] = s[j] + s1[i] ;
			
		}
    	
	}
    
    for(int i = 0 ; i < 3 ;i++){
    	cout << s[i] << endl ;
	}
    
    return 0;
}

