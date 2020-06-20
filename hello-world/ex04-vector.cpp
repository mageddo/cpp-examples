#include <iostream>
#include <vector>

using namespace std;

// examples http://stackoverflow.com/a/409396/2979435

int main() {
	vector<int> myVector;
	myVector.push_back(1);
	myVector.push_back(2);
	myVector.push_back(3);

	for(int i=0; i < myVector.size(); i++){
		cout << myVector[i] << endl;
	}
	cout << "=====================" << endl;
	for(std::vector<int>::iterator it = myVector.begin(); it != myVector.end(); ++it) {
		std::cout << *it << endl;
	}

}
