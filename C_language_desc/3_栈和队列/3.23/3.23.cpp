#include"3.23.h"

Person dancer[MAXQSIZE];
int main() {
	int i = 0;
	fstream file;
	file.open("DancePartner.txt");
	if (!file) {
		cout << "错误！未找到文件！\n\n" << endl;
		exit( ERROR);
	}
	while (!file.eof()) {
		file >> dancer[i].name >> dancer[i].sex;
		i++;
	}
	DancePartner(dancer, i + 1);
	return 0;
}