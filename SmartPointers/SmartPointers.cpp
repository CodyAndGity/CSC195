
#include <iostream>
#include <memory>
template<typename T>
struct smart_ptr {
	smart_ptr() =default;
	smart_ptr(T* input) {
		this->p = input;
	}
	~smart_ptr() {
		delete p;
		//std::cout << "Deleted" << std::endl;
	}
	T* p = nullptr;

	
	T& operator *() {
		return *p;
	}
	T* operator & () {
		return p;
	}
};

int main() {
	int i = 5;
	int* p = &i;
	{
		smart_ptr<int> sptr1{ new int(10) };
		*sptr1 = 20;//only works becuase * reterns T&, not T
		std::cout << *sptr1 << std::endl;//no need to say sptr1.p, can just say sptr1
		std::cout << &sptr1 << std::endl;//because of the operator overloading
		smart_ptr<float> sptr2{ new float(111.5) };
		std::cout << *sptr2.p << std::endl;
		//if sptr1 =nullptr, it won't get deleted, laed to memorey leak
	}

	std::unique_ptr<int> uptr2{ new int(10) };
	std::unique_ptr<int> uptr1=std::make_unique<int>(23);
	std::cout << *uptr1 << std::endl;
	std::cout << *uptr2 << std::endl;

	//cant do uptr1=uptr2; //because unique_ptr is not copyable
	{
		std::shared_ptr<int> sharedptr1 = std::make_shared<int>(10);
		std::cout << sharedptr1.use_count() << std::endl;
		{
			std::shared_ptr<int> sharedptr2 = sharedptr1;
			std::cout << sharedptr1.use_count() << std::endl;
		}
		std::shared_ptr<int> sharedptr3 = sharedptr1;
		std::cout << sharedptr1.use_count() << std::endl;
	}
	{
		std::weak_ptr<int> weakptr1 = std::make_shared<int>(10);
		std::cout << weakptr1.use_count() << std::endl;
		std::shared_ptr<int> sharedptr1 = weakptr1.lock();
		std::cout << weakptr1.use_count() << std::endl;//weak_ptr does not increase the reference count
};
