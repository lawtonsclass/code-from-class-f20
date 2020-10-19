#include <fstream>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct RGB {
  int r;
  int g;
  int b;
};

int main(int argc, char* argv[]) {
  string input_filename = argv[1];
  string output_filename = argv[2];

  // read the image from ifs
  ifstream ifs(input_filename);
  string s;
  getline(ifs, s);  // skip the first line

  // read the width/height
  int width, height;
  ifs >> width >> height;
  getline(ifs, s);  // finish off the line

  getline(ifs, s);  // skip the third line

  vector<RGB> pixels;

  // read each pixel until the end of the file
  while (ifs) {
    int r, g, b;
    ifs >> r >> g >> b;
    if (!ifs) break;

    // we had a valid line and we just read an rgb value
    // let's save it
    pixels.push_back({r, g, b});
  }

  // done with ifs
  ifs.close();

  // let's do stuff with the pixels!
  for (RGB& pixel : pixels) {
    // change to be grayscale
    int avg = (pixel.r + pixel.g + pixel.b) / 3;
    pixel.r = avg;
    pixel.g = avg;
    pixel.b = avg;
  }

  // save the image to a new file
  ofstream ofs;
  ofs.open(output_filename);

  // write a valid PPM image file to ofs
  ofs << "P3\n";
  ofs << width << " " << height << endl;
  ofs << "255\n";
  for (RGB& pixel : pixels) {
    ofs << pixel.r << " " << pixel.g << " " << pixel.b << endl;
  }

  ofs.close();

  return 0;
}
