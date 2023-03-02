#pragma once
#include <string>

struct RgbColor
{
    unsigned char r, g, b;
    static RgbColor hex_to_rgb(std::string);
};