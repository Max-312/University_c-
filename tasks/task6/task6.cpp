#include <fstream>
#include "rpn.h"

using namespace std;

int main(int argc, char** argv) {
    ifstream in(argv[1]);

    string expr;
    in >> expr;
    in.close();

    double value = calculateRPN(expr); 

    ofstream out(argv[2]);
    out << value << endl;
    out.close();

    return 0;
}
