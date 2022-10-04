#include <iostream>
#include <fstream>

static std :: string	replacing(std :: string str, std :: string s1, std :: string s2) {
	size_t i;

	for (i = 0; i < str.size(); i++)
		if (!str.compare(i, s1.size(), s1)) {
			str.erase(i, s1.size());
			str.insert(i, s2);
		}	
	return (str);
}

static void	forFiles(std :: string	filename, std :: string	s1, std :: string	s2) {
	std :: ifstream infile;
	std :: ofstream outfile;
	std :: string	fileout, str;

	infile.open(filename);
	if (!infile.is_open()) {
		std :: cerr << "Unable to open infile" << std :: endl;
		return ;
	}
	fileout = filename + ".replace";
	outfile.open(fileout, std :: fstream :: trunc);
	if (!outfile.is_open()) {
		std :: cerr << "Unable to open outfile" << std :: endl;
		return ;
	}
	while (!infile.eof()){
		std :: getline(infile, str);
		outfile << replacing(str, s1, s2) << std :: endl;
	}
	infile.close();
	outfile.close();
}

int main(void) {
	std :: string	filename, s1, s2;

	std :: cout << "File: ";
	std :: getline(std :: cin, filename);
	std :: cout << "s1: ";
	std :: getline(std :: cin, s1);
	std :: cout << "s2: ";
	std :: getline(std :: cin, s2);
	
	if (filename == "" || s1 == "" || s2 == ""){
		std :: cerr << "Wrong input" << std :: endl; 
		return 1;
	}
	forFiles(filename, s1, s2);
	return 0;
}