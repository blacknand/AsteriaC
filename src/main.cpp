#include <iostream>

int main(int argc, char** argv)
{
    if (argc < 4) {
        std::cout << "Usage: ./asteriac <inputfile.sc> -o <outputfile> [-S]\n";
        return -1;
    }

    std::cout << "AsteriaC driver stub\n";
    return 0;
}