#include <iostream>
#include <thread>

int main()
{
	int nviolations = 0;
	
    for (int i = 0; i < 100 * 1000; ++i) {
        volatile int x(0), y(0);
		
		std::thread t1([&]{
			x = 1;
			if(y == 0) {
				x = 2;
			}
		});
		
		std::thread t2([&] {
			y = 1;
			if (x == 0) {
				y = 2;
			}
		});
		t1.join();
		t2.join();
		if(x ==2 && y == 2) {
			++nviolations;
		}
    }

    std::cout << "nviolations = " << nviolations << std::endl;
}
