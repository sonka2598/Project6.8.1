#include <iostream>
#include <vector>
#include <set>

using namespace std;

void removeDuplicates(vector<int>& d) {
	set<int> s(d.begin(), d.end()); 
	d.assign(s.begin(), s.end());
}

int main() {
	vector<int> v = { 1, 1, 2, 5, 6, 1, 2, 4 };
	removeDuplicates(v);
	for (int x : v) {
		cout << x << " ";
	}
}
