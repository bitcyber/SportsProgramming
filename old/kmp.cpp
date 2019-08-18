/*
 Time & Date of creation 10:50:21 06/11/2018
 Author : Amit Kumar
 Copyright © amit2rockon. All rights reserved.
*/

#include <iostream>
#include <algorithm>

using namespace std;

int find_substring(string str, string pattern) {

	// Step 0. Should not be empty string
	if( str.size() == 0 || pattern.size() == 0)
		return -1;

	// Step 1. Compute failure function
	int failure[pattern.size()];
	std::fill( failure, failure+pattern.size(), 0);

	for(int r=1, l=0; r<pattern.size(); r++) {

		while( l && pattern[l] != pattern[r])
			l = failure[l-1];

		// assert( l == -1 || pattern[l+1] == pattern[r]);
		if( pattern[l] == pattern[r])
            ++l;
		failure[r] = ++l;
	}

    cout<<"pi array\n";

    for(int i=0;i<pattern.size();i++)
    {
        cout<<failure[i]<<" ";
    }
    cout<<endl;

	// Step 2. Search pattern
	int tail = 0;
	for(int i=0; i<str.size(); i++) {

		while( tail && str[i] != pattern[tail])
			tail = failure[tail];

		if( str[i] == pattern[tail])
			tail++;

		if( tail == pattern.size()-1)
			return i - tail+1;
	}

	return -1;
}

int main() {

	cout << find_substring("banananobano", "nano") << endl;
	return 0;
}