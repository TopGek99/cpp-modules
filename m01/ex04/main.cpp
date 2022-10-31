#include <iostream>
#include <fstream>

int main(int argc, char *argv[]) {
	std::ifstream fin;
	std::ofstream fout;
	std::string fname, s1, s2, temp;
	int s1pos;

	if (argc != 4)
		return (1);
	fname = argv[1];
	s1 = argv[2];
	s2 = argv[3];
	
	fin.open(fname.c_str());
	fout.open((fname+".replace").c_str());
	while (std::getline(fin, temp)) {
		while ((s1pos = temp.find(s1)) != (int)std::string::npos) {
			std::string tempLeft, tempRight;
			tempLeft = temp.substr(0, s1pos);
			tempRight = temp.substr(s1pos+s1.length(), temp.length()-1);
			temp = tempLeft+s2+tempRight;
		}
		fout << temp << std::endl;
	}
}