#include <iostream>
#include "huffman.hpp"
using namespace std;

int main(int argc, char* argv[]) {
    if (argc != 3) {
        cout << "Failed to detect Files";
		exit(1);
	}

    huffman f(argv[1], argv[2]);
    f.decompress();
    cout << " Decompressed Successfully " << endl;

    return 0;
}



//   g++ Decoder.cpp  huffman.cpp -o main
//   ./main  compressedFile.huf outputFile.txt