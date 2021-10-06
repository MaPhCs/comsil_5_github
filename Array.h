#ifndef __ARRAY__
#define __ARRAY__
// 주석 : 코드 변경 확인용 for tb03
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
