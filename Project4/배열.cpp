#include <iostream>

struct Rectangle {
	int length;
	int width;
};

enum StudentName {
	Yujin,//0
	Heart,//1
	Roxie,//2
	Num_student//3. �̷��� ���� �迭ũ�� ������ �� ��
};

void PrintArray(int* _array, int size) {
	using namespace std;
	for (int i = 0; i < size; ++i) {
		cout << "Address of element " << i << ": " << &_array[i] << ", Value: " << _array[i] << endl;
	}
	//����
	//for (int i = 0; i < 10; i++) {
	//	_array += 1;
	//	cout << _array << endl;

	//}

	cout<<"�Ű������� ũ��: �������� ũ��. " << sizeof(_array) << endl;
}


int main_�迭() {
	using namespace std;
	
	//�迭: ���� ũ�� �Ҵ�.(������ Ÿ�ӿ� ����)
	//���� ũ������: ���. 


	/*int jackjackScore;
	int dashScore;
	int violetScore;*/
	//���: 
	int studentScores[5];
	studentScores[0] = 100;
	studentScores[1] = 70;
	studentScores[2] = 80;
	studentScores[3] = 30;
	studentScores[4] = 20;
	cout << sizeof(studentScores) << endl;
	for (int score : studentScores) {
		cout << score << "\t";
	}
	cout << endl;


	//����ü
	cout << "Rectangle ����ü ������: " << sizeof(Rectangle) << endl;

	Rectangle rectArr[10];
	cout << "rectArr[10] ����ü ������ : " << sizeof(rectArr) << endl;
	
	rectArr[0].length = 1;
	rectArr[0].width = 2;
	cout << "rectArr[0]: " << rectArr[0].length << " " << rectArr[0].width << endl;

	int myArray[] = {1,2,3,4,5,6};
	for (int num : myArray) {
		cout << num << endl;
	}

	myArray[Roxie] = 44;
	cout << "myArray["<<Roxie<<"]: " << myArray[Roxie] << endl;

	int studentNumber[Num_student];
	studentNumber[Roxie] = 33;
	cout << "studentNumber[Roxie] " << studentNumber[Roxie] << endl;
	
	cout << &studentScores << endl;
	cout << &studentScores[0] << endl;
	
	cout << studentNumber << endl;
	PrintArray(studentNumber, Num_student);

	int studentNumberArraySize = sizeof(studentNumber) / sizeof(int);
	cout << studentNumberArraySize << endl;

	//��������
	for (int startIndex = 0; startIndex < studentNumberArraySize - 1; startIndex++) {
		int smallestIndex = startIndex;
		for (int currentIndex = startIndex + 1; currentIndex < studentNumberArraySize; currentIndex++)//smallest index���� ������ �� �ȱ�
		{
			if (studentNumber[smallestIndex] > studentNumber[currentIndex]) {//������ ���� �� �߰� ��
				smallestIndex = currentIndex;//smallest �ε��� ����
			}
		}
		//swap
		/*int temp = studentNumber[smallestIndex];
		studentNumber[smallestIndex] = studentNumber[startIndex];
		studentNumber[startIndex] = temp;*/

		//���ŵ� smallest index�� start index�� ��� ��ü. ��, ������ ������ ������
		swap(studentNumber[smallestIndex], studentNumber[startIndex]);

	}


	//�������迭
	const int row = 3;
	const int col = 5;
	int mulArr[row][col] = 
	{
		{1,2,3,4,5},//row 0
		{6,7,8,9,10},//row 1
		{11,12,13,14,15}//row 2
	};

	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			cout << &mulArr[i][j] <<"\t";
			cout << mulArr[i][j] <<"\n";

		}
	}

	return 0;
}