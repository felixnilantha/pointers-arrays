#include <iostream>
using namespace std;

int getArraySize(int sizeOfTexts, int sizeOfString) {
	int sizeOfArray = sizeOfTexts / sizeOfString;

	return sizeOfArray;
}

int main() {

	string texts[] = { "clubs ", "diamonds ", "hearts ", "spades" };

	string *pTexts = texts;

	cout << "looping through the array" << endl;
	for (int i = 0; i < getArraySize(sizeof(texts), sizeof(string)); i++) {
		cout << texts[i] << flush;
	}
	cout << endl;
	cout << "de referencing the pointer" << endl;
	cout << *pTexts << endl;

	string *pElement = &texts[0];
	string *pLastElement = &texts[getArraySize(sizeof(texts), sizeof(string))-1];

	while (true) {

		cout << *pElement << flush;

		if (pElement == pLastElement) {
			break;
		}
		pElement++;
	}

	return 0;
}
