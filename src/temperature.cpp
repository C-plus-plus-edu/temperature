#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> temp(n);
	for (int& t : temp) {
		cin >> t;
	}
	int sr = 0;
	for (auto t : temp) {
		sr += t;
	}
	sr = sr / n;
	vector<int> fin;
	for (int i = 0; i < temp.size(); ++i) {
		if (temp[i] > sr) {
			fin.push_back(i);
		}
	}
	cout << fin.size() << endl;
	for (auto t : fin) {
			cout << t << " ";
		}
	return 0;
}
