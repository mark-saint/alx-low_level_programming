#include <stdio.h>



int main(void)
{
unsigned long a = 0, b = 1, sum_;
float total;

while (sum_ <= 4000000)
{
sum_ = a + b;



if ((sum_ % 2) == 0)
{
total += sum_;
}

a = b;
b = sum_;

}

printf("%.0f\n", total);

return (0);

}
