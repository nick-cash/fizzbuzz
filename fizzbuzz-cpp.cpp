#include <iostream>
#include <sstream>
#include <string>
#include <cstdio>
#include <stdint.h>

class FizzBuzz
{
    public:
        FizzBuzz()
        {
            FizzedOrBuzzed = false;
            Output = "";
        }

        void Fizz(uint8_t num)
        {
            FizzOrBuzz(num, 3, "Fizz");
        }

        bool Buzz(uint8_t num)
        {
            FizzOrBuzz(num, 5, "Buzz");
        }

        void Run()
        {
            uint8_t num;

            for (num = 1; num <= 100; ++num, FizzedOrBuzzed=false, Output="")
            {
                Fizz(num);
                Buzz(num);

                if (!FizzedOrBuzzed)
                {
                    char s[4];
                    sprintf(s, "%d", num);

                    Output += s;
                }

                std::cout << Output << std::endl;
            }
        }

    private:
        bool        FizzedOrBuzzed;
        std::string Output;

        void FizzOrBuzz(uint8_t num, uint8_t mod, std::string out)
        {
            if ((num % mod) == 0)
            {
                Output += out;
                FizzedOrBuzzed = true;
            }
        }
};

int main(void)
{
    FizzBuzz Program;
    Program.Run();
}
