#include "pair_test.h"



pair_test::pair_test()
{
}


pair_test::~pair_test()
{
}

pair<string, string> pair_test::creat()
{
	pair <string, string> pa;
	string    first, last;
	cout << "����First/Last �ַ���,����س����� " << endl;
	while (cin >> first >> last)
	{
		
		pa = make_pair(first, last);// make_pair��ζ�� *pa=pair<string,string>(first,last);
		if (cin.get() == '\n') break;
	}
	return pa;
}

pair<string, string> pair_test::show(pair<string, string> p)
{
	cout << "the first element is " << p.first<<endl;
	cout << "the last element is " << p.second<<endl;
	return p;
}
