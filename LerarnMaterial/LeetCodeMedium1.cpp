#include "Common.h"
#include "Solution.h"
#include <tuple>
#include <random>
#include <regex>
#include "SortClass.h"

int main()
{
	//ʹ������ָ��
	shared_ptr<Solution> s_ptr;
	s_ptr->generateParenthesis(3);
	tuple<int, double, string> tupStruct;
	tupStruct = make_tuple(1, 2.6, "adawd");
	cout << get<0>(tupStruct)<<endl;
	cout << get<1>(tupStruct) << endl;
	cout << get<2>(tupStruct) << endl;
	s_ptr->divide(1,1);
	string pattern("[^c]ei");
	pattern = "[[:alpha:]]*" + pattern + "[[:alpha:]]*";
	regex reg(pattern);
	smatch results;
	string test_str = "receipt freind theif receive";
	if (regex_search(test_str, results, reg))
	{
		cout << results.str() << endl;
	}
	//ȷ��������ķ�Χ
	uniform_int_distribution<unsigned> u(0, 100);
	default_random_engine e;
	vector<int> nums1 = { 1, 1, 2, 1, 2, 2, 1,5,6,7,8,9,-1,-2,-5};
	vector<int> nums2 = { 197, 130, 1 };
	int nums[7] = {0};
	for (int i = 0; i < 7;i++)
	{
		nums[i] = u(e);
	}
	unique_ptr<SortSequence::SortClass> uniSolt_ptr;
	cout << "\n��������Ҫ������0-ð������1-ѡ������2-��������3-ϣ������4-�鲢����5-��������6-������7-��������\n";
	int temp = 0;
	cin >> temp;
	cout << "������Ҫ�������\n";
	vector<int> pNum;
	int pNumber = 0;
	while (cin >> pNumber)
	{
		pNum.push_back(pNumber);
	}
	switch (temp)
	{
	case 0:
		uniSolt_ptr->BuppleSort(pNum);
		break;
	case 1:
		uniSolt_ptr->SelectSort(pNum);
		break;
	case 2:
		uniSolt_ptr->InsertSort(pNum);
		break;
	case 3:
		uniSolt_ptr->ShellSort(pNum);
		break;
	case 4:
		uniSolt_ptr->MergeSort(pNum);
		break;
	case 5:
		uniSolt_ptr->QuickSort(pNum);
		break;
	case 6:
		uniSolt_ptr->HeapSort(pNum);
		break;
	case 7:
		uniSolt_ptr->RadixSort(pNum);
		break;
	default:
		break;
	}
	cout << "������\n";
	for (auto &it:pNum)
	{
		cout << it << " ";
	}
	cout << endl;
	//s_ptr->longestSubstring("aaabb", 3);
	//s_ptr->removeKdigits("10", 1);
	//s_ptr->originalDigits("owoztneoer");
	system("pause");
	return 0;
}