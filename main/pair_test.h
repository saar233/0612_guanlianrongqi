#pragma once
#include <iostream>
#include <string>
#include <utility>

using namespace std;
class pair_test
{
public:
	pair_test();
	~pair_test();
	pair <string, string> creat();//创建关联容器Pair
	pair <string, string> show(pair <string,string> p);//显示关联容器Pair
};

