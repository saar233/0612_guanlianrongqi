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
	cout << "输入字符串,输入回车结束 " << endl;
	while (cin >> word)
	{
		++ma[word];// 关键字word 
		
		if (cin.get() == '\n') 
			break;
	}
	for(map<string, int>::const_iterator it = ma.begin(); it != ma.end(); it++)
	{
		cout << it->first << " occurs " << it->second << " " << ((it->second > 1) ? "times" : "time") << endl;
		//"?"运算符的含义是：先求表达式1的值，如果为真，则执行表达式2，并返回表达式2的结果；
		//如果表达式1的值为假，则执行表达式3，并返回表达式3的结果。
	}



	return ma;

}

map<string, string> map_test::creat()
{
	map <string, string> ma;
	string v, k;
	cout << "输入k值" << endl;
	while (cin>>k)
	{
		cout << "输入值v " << endl;
		cin >> v;
		ma[k]=v;

	}
	for (map<string, string>::const_iterator it = ma.begin(); it != ma.end(); it++)
	{
		cout << it->first << " is key and " << it->second << " is value " <<endl;

	}
	return ma;
}
