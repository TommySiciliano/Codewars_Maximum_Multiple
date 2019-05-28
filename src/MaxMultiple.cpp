#include <iostream>
using namespace std;

/*
 * Task
Given a Divisor and a Bound , Find the largest integer N , Such That ,

Conditions :
N is divisible by divisor
N is less than or equal to bound
N is greater than 0.

Examples:
1- maxMultiple (2,7) ==> return (6)
2- maxMultiple (10,50)  ==> return (50)
3- maxMultiple (37,200) ==> return (185)
 */

int maxMultiple(int divisor, int bound)
{
	int i = 1;
	while ( (divisor * ++i) <= bound);
	return divisor == bound ? (divisor*i) : ((divisor*i) - divisor);
}

int main() {

maxMultiple(3,7);

}
