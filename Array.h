#ifndef __ARRAY__
#define __ARRAY__
// �ּ� : �ڵ� ���� Ȯ�ο� for tb03
class Array{
	protected:
		int *data;
		int len;
	public:
			Array(int size);
			~Array();

			int length() const;

			int& operator[](int i);
			int operator[](int i)const;

			void print();
};
#endif
