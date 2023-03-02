#define STB_IMAGE_WRITE_IMPLEMENTATION
#include <iostream>
#include <string>
#include "stb_image_write.hpp"
#include <vector>
#include "Rgbcolor.hpp"

void hex_to_color_image(std::string hex, int width, int height, std::string filename) {
    RgbColor color = RgbColor::hex_to_rgb(hex);
    std::vector<RgbColor> data(width * height, color);

    stbi_write_png(filename.c_str(), width, height, 3, data.data(), width * 3);
}

int main() {
    std::string hex = "#8D2A94";
    hex_to_color_image(hex, 200, 200, "red.png");
    return 0;
}
