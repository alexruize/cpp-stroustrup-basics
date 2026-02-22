#include <iostream>
#include <ctime>


int main() {
    time_t timer1 = time(NULL);
    std::cout << "Start timestamp: " << timer1 << std::endl;

    std::cout << "Press enter when ready to cont.";

    std::cin.ignore(); //hacky

    time_t timer2 = time(NULL);
    std::cout << "End timestamp: " << timer2 << std::endl;

    std::cout << "Elapsed seconds: " << difftime(timer2, timer1) << "\n";

    return 0;
}
