//дһ�δ��룬������¼��������ֳ��ֵĴ�����iostream��
#include <iostream>

int main()
{
	std::cout << "������һ�����֣���С���󣩣� " << std::endl;
	int currVal = 0, val = 0;
	if (std::cin >> currVal){
		int cnt = 1;// ���м���
		while (std::cin >> val){
			if (val == currVal)
				++cnt;
			else{
				std::cout <<  currVal  << " ������ " <<  cnt  << " ��" << std::endl;
				currVal = val;
				cnt = 1;
			}
		}
		std::cout << currVal << " ������ " << cnt << " ��" << std::endl;
	}
	return 0;
}
//ȱ�㣺��Ҫ��С���󣨵����������룬���򲿷������޷�ͳ�ơ�