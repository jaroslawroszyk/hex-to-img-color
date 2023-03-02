use image::{Rgb, RgbImage};
use std::io::{self};

fn hex_to_rgb(hex: &str) -> Rgb<u8> {
    let r = u8::from_str_radix(&hex[1..3], 16).unwrap();
    let g = u8::from_str_radix(&hex[3..5], 16).unwrap();
    let b = u8::from_str_radix(&hex[5..7], 16).unwrap();
    Rgb([r, g, b])
}

fn main() {
    // let mut hex_color = String::new();
    // println!("Enter a hexadecimal color code (without the # symbol):");
    // io::stdin()
    //     .read_line(&mut hex_color)
    //     .expect("Failed to read line");
    // hex_color = hex_color.trim().replace("#", "");
    // hex_color = hex_color.to_uppercase();

    // hex_color = format!("#{}", hex_color);

    let hex_color = "#0000FF";

    let rgb_color = hex_to_rgb(&hex_color);
    let mut img = RgbImage::new(200, 200);
    for pixel in img.pixels_mut() {
        *pixel = rgb_color;
    }
    img.save("output.png").unwrap();
}
