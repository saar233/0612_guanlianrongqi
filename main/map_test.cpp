#include "map_test.h"



map_test::map_test()
{
}


map_test::~map_test()
{
}

map<string,int> map_test::count()
{
	map <string,int> ma;
	string    word;
	cout << "�����ַ���,����س����� " << endl;
	while (cin >> word)
	{
		++ma[word];// �ؼ���word 
		
		if (cin.get() == '\n') 
			break;
	}
	for(map<string, int>::const_iterator it = ma.begin(); it != ma.end(); it++)
	{
		cout << it->first << " occurs " << it->second << " " << ((it->second > 1) ? "times" : "time") << endl;
		//"?"������ĺ����ǣ�������ʽ1��ֵ�����Ϊ�棬��ִ�б��ʽ2�������ر��ʽ2�Ľ����
		//������ʽ1��ֵΪ�٣���ִ�б��ʽ3�������ر��ʽ3�Ľ����
	}



	return ma;

}

map<string, string> map_test::creat()
{
	map <string, string> ma;
	string v, k;
	cout << "����kֵ" << endl;
	while (cin>>k)
	{
		cout << "����ֵv " << endl;
		cin >> v;
		ma[k]=v;

	}
	for (map<string, string>::const_iterator it = ma.begin(); it != ma.end(); it++)
	{
		cout << it->first << " is key and " << it->second << " is value " <<endl;

	}
	return ma;
}
