#include<iostream>
#include<fstream>
#include<string>
using namespace std;



struct Pixel
{
	Pixel()
	{
		double x = 0;
		double y = 0;
		double z = 0;
		int blackLevel = 1;
		double dist = 0;
	}

	Pixel(double x, double y, double z, int blackLevel)
	{
		this->x = x;
		this->y = y;
		this->z = z;
		this->blackLevel = blackLevel;
		this->dist = sqrt(x * x + y * y + z * z);
	}
	double getX()
	{
		return x;
	}
	double getY()
	{
		return y;
	}
	double getZ()
	{
		return z;
	}

	double getBlackLevel()
	{
		return blackLevel;
	}
	double getDist()
	{
		return dist;
	}
	void setDist(int dist)
	{
		this->dist = dist;
	}

	void setBlackLevel(int blackLevel)
	{
		this->blackLevel = blackLevel;
	}
	void input(istream& fin);
	void output(ostream& fout);
	bool operator< (Pixel& px);
	bool operator> (Pixel& px);
	Pixel* sortByDistance(int n, Pixel* arr);
	Pixel* black(int n, Pixel* arr);

private:
	double x;
	double y;
	double z;
	int blackLevel;
	double dist;
};
bool Pixel::operator< (Pixel& px) {
	return this->dist < px.dist;
}
bool Pixel::operator> (Pixel& px) {
	return this->dist > px.dist;
}
Pixel* Pixel::sortByDistance(int n, Pixel* arr)
{
	for (int i = n - 1; i >= 1; i--)
		for (int j = 0; j < i; j++)
		{
			if (arr[j].getDist() > arr[j + 1].getDist())
			{
				double foo = arr[j].getDist();
				arr[j].setDist(arr[j + 1].getDist());
				arr[j + 1].setDist(foo);
			}
		}
	return arr;
}
Pixel* Pixel::black(int n, Pixel* arr)
{
	for (int i = n - 1; i >= 1; i--)
		for (int j = 0; j < i; j++)
		{
			if (arr[j].getBlackLevel() > arr[j + 1].getBlackLevel())
			{
				int foo = arr[j].getBlackLevel();
				arr[j].setBlackLevel(arr[j + 1].getBlackLevel());
				arr[j + 1].setBlackLevel(foo);
			}
		}
	return arr;
}

void Pixel::input(istream& fin)
{
	fin >> x;
	fin >> y;
	fin >> z;
	fin >> blackLevel;
}

void Pixel::output(ostream& fout)
{
	fout << "X: " << x << " \ " << "Y: " << y << " \ " << "Z: " << z << " \ " << z << "Level of black: " << " \ " << blackLevel << endl;
}

int main()
{
	string path = "Data.txt";
	ifstream fin;
	fin.exceptions(ifstream::badbit | ifstream::failbit);//специфіка ifstream(має бути) 

	Pixel tr;
	const int n = 5;
	Pixel arr[n];

	try {
		cout << "Attempt to open the file" << endl;
		fin.open(path);
		cout << "File is open!" << endl;
		for (int i = 0; i < n; i++)
		{
			tr.input(fin);
			tr.output(cout);
			arr[i] = tr;
		}
		fin.close();
	}
	catch (const exception& ex)
	{
		cout << ex.what() << endl;
		cout << "Error: file is not open!" << endl;
	}
	cout << endl;
	string path2 = "New data.txt";
	ofstream fout;
	fout.open(path2, ofstream::app);
	tr.sortByDistance(n, arr);
	if (fout.is_open())
	{
		for (int i = 0; i < n; i++)
		{
			tr = arr[i];
			tr.output(fout);
		}
	}

	tr.black(n, arr);
	cout << endl << endl;
	fout.open(path);
	tr = arr[n - 1];
	tr.output(cout);
	fout.close();
	return 0;

}