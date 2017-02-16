#include "word.h"

word::word()
{
	data = "";
}

word::word(string dat)
{
	data = dat;
}

string word::getWord()
{
	return data;
}

list<file>* word::getFiles() {
	return &files; 
}

bool word::operator==(const word& other) {
	return data == other.data;
}

int word::getHashCode() {
	return 1;
}
