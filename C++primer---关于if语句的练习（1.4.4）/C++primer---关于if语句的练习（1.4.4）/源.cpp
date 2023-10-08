//写一段代码，用来记录输入的数字出现的次数（iostream）
#include <iostream>

int main()
{
	std::cout << "请输入一组数字（由小到大）： " << std::endl;
	int currVal = 0, val = 0;
	if (std::cin >> currVal){
		int cnt = 1;// 进行计数
		while (std::cin >> val){
			if (val == currVal)
				++cnt;
			else{
				std::cout <<  currVal  << " 出现了 " <<  cnt  << " 次" << std::endl;
				currVal = val;
				cnt = 1;
			}
		}
		std::cout << currVal << " 出现了 " << cnt << " 次" << std::endl;
	}
	return 0;
}
//缺点：需要由小到大（递增排序）输入，否则部分数字无法统计。