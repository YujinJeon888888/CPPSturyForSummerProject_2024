#include <iostream>
#include <vector>

using namespace std;

int main_벡터() {
	//벡터를 잘 쓰는법: 내부적으로작동하는 new와 delete를 최소한으로 호출하도록 하기
	std::vector<int> v{1,2,3};
	
	//size: 사용용량에서 실제 사용 개수, capacity: 실제 사용 용량
	//왜? 속도를 위해서 이렇게 설계된 것
	v.resize(2);//잘린부분은 0으로 자동으로 채움
	for (auto& e : v) {
		cout << e << " ";
	}
	cout << endl;
	cout <<v.size()<<" " << v.capacity() << endl;//2 3

	//미리 확보해두면 무슨 작업을 해도 빠름.
	v.reserve(1024);//메모리 용량을 미리 확보해놓겠다는 의미
	
	
	vector<int> stack;
	//미리 확보해놓으면 new delete호출할 필요 없으니 효율 좋음
	stack.reserve(1024);	
	stack.push_back(3);
	stack.push_back(6);
	stack.push_back(7);
	//capacity는 줄어들지 않고 size만 줄어듦.
	stack.pop_back();
	stack.pop_back();
	stack.pop_back();




	return 0;
}