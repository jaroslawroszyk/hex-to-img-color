#include "Rgbcolor.hpp"
#include <string>

RgbColor RgbColor::hex_to_rgb(std::string hex)
{
    hex.erase(0, 1); // remove the '#' character
    unsigned int hex_val = std::stoul(hex, nullptr, 16);
    unsigned char r = (hex_val >> 16) & 0xFF;
    unsigned char g = (hex_val >> 8) & 0xFF;
    unsigned char b = hex_val & 0xFF;
    return {r, g, b};
}