#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	fstream in;
	fstream out;

	in.open(argv[1], ios::in | ios::binary);
	out.open(argv[2], ios::out | ios::binary);

	char ch;

	// clean 128 Byte
	for(int i=0; i<128; i++)
		in.get(ch);

	// rewrite png file
	while(!in.eof())
	{
		in.get(ch);
		out.put(ch);
	}
	
	in.close();
	out.close();

	exit(0);
}